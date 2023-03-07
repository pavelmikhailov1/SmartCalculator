#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


#define OPERAND   	 0
#define NUMBER 	  	 1
#define ERROR     	 1
#define ERROR_CH    '!'
#define VALID_CHARACTERS "1234567890.()+-*/^modcsintaqrtlg "

typedef union Value
{
	__int128_t val_int;
	double     val_double;
} size_of_memory;

typedef enum Enum {
	PLUS,  //0
	MINUS, //1
} operands;

typedef struct Stack_oper // передаю 0
{
	operands c;						    ///////// есть енам для видов операторов
	struct Stack_oper *next;
} t_node_oper;

typedef struct Stack_value // передаю 1
{
	double val;					///////// есть юнион для разных значений
	struct Stack_value *next;
} t_node_value;


void* allocate(int flag) {
	return flag ? calloc(32, 1) : calloc(16, 1);
}

void* push(void* head, void* value, int flag_head) {
	void *current = NULL;
	if (flag_head == 0) {
		current = (t_node_oper*)allocate(OPERAND);
		((t_node_oper*)current)->c = *((int*)value);
		((t_node_oper*)current)->next = (t_node_oper*)head;
	} else {
		current = (t_node_value*)allocate(NUMBER);
		((t_node_value*)current)->val = *((double *)value);
		((t_node_value*)current)->next = (t_node_value*)head;
	}
	return (void*)current;
}

void* allocate(int flag_head);
void* push(void *head, void* c, int flag_head);
int parser(char *str);
double get_number(char **pointer);
char get_character(char **str, int *err);
char get_function(char **str);
// int check_correct_func(char **str);
char get_triginometric_func(char **str);
void remove_spases(char *str, char **result);

int main(int argc, char const *argv[])
{
	char a[10];
	char *p = a;
	t_node_value* head_value = NULL;
	t_node_oper* head_oper = NULL;
	// printf("%d\n", parser("-tn(-5)"));
	parser("-tn(-5)");
	// while (head_value != NULL) 
	// {
		// printf("%d\n", head_value->val);
	// 	head_value = head_value->previos;
	// }
	
	return 0;
}
void remove_spases(char *str, char **result) {
	int i = 0;
	while (*str != '\0') {
		if (*str != ' ') {
			*((*result)+i) = *str;
			i++;
		}
		str++;
	}
}

int parser(char *str) {
	char *result = (char *)calloc(1000, sizeof(char));
	char *str_buf = (char *)calloc(1000, sizeof(char));
	char *p = str_buf;
	int num_flag_err = 0;
	int char_flag_err = 0;
	remove_spases(str, &str_buf);
	printf("%s\n", str_buf);
	if (*str_buf == '+' || *str_buf == '-') {
		result[0] = '0';
	}
	while (*str_buf) {
		if (strchr(VALID_CHARACTERS, *str_buf) == NULL) return ERROR; //проверка каждого символа
		if (isdigit(*str_buf)) { //если символ цифра
			if (num_flag_err == 1) return ERROR;
			double num = get_number(&str_buf);
			char buff[50];
			sprintf(buff, "%.13f", num);
			strcat(result, buff);
			num_flag_err = 1;
			// printf("%s\n", result);
			// printf("%s\n", str_buf);
		} else {
			if (*str_buf == '(' && (*(str_buf+1) == '+' || *(str_buf+1) == '-') && isdigit(*(str_buf+2))) { //если скобка а за ней унарный оператор(обработка краевой ситуации)
				strcat(result, "(0");
				str_buf++;
				continue;
			}
			// printf("%c\n", get_character(&str_buf, &char_flag_err));
			result[strlen(result)] = get_character(&str_buf, &char_flag_err);
			if (char_flag_err == 1) return ERROR;
			num_flag_err = 0;
		}
	}
	printf("%s\n", result);
	free(p);
	return 0;
}

char get_character(char **str, int *err) {
	// printf("aboba %s\n", *str);
	char res = 0;
	if (strchr("+-*/^", **str) != NULL && strchr("+-*/^m", *(*str+1)) == NULL) { //если текущий символ оператор +-*/^ и следущий не оператор +-*/^
		char tmp = **str;
		(*str)++;
		return tmp;
	} else if (strchr("cstal", **str) != NULL) { //если текущий символ начало функции
		res = get_function(str);
		if (res == '!') *err = 1; //некорректный ввод
	} else if (**str == '(' || **str == ')') { //если текущий символ скобка ()
		char tmp = **str;
		(*str)++;
		return tmp;
	} 
	return res;
}

char get_function(char **str) {
	char res = '!';
	if (strchr("cst", **str) != NULL && *(*str+1) != 'q') { //если это тригонометрическая функция
		res = get_triginometric_func(str);
	} else if (**str == 'a') {
		res = get_triginometric_func(str);
	}
	return res;
}

char get_triginometric_func(char **str) {
	// int err = 1;
	char res = '!';
	char buff[5];
	strncpy(buff, *str, 4);
	buff[4] = '\0';
	if (strcmp("sin(", buff) == 0) {
		*str = *str + 3;
		res = 's'; //возвращаем s если в строке корректный sin()
		// err = 0;
	} else if (strcmp("cos(", buff) == 0) {
		*str = *str + 3;
		res = 'c'; //возвращаем c если в строке корректный cos()
		// err = 0;
	} else if (strcmp("tan(", buff) == 0) {
		*str = *str + 3;
		res = 't'; //возвращаем t если в строке корректный tan()
		// err = 0;
	}
	
	// if (check_correct_func(str) == 0 && err == 0) {
	// 	return res;
	// }
	return res;
 }

//  int check_correct_func(char **str) {

//  }

double get_number(char **pointer) {
	char *buff = *pointer;
	double num = 0.;
	strtoll(buff, &buff, 10);
	if (*buff == '.') {
		num = strtod(*pointer, pointer);
	} else {
		num = strtoll(*pointer, pointer, 10);
	}
	return num;
}

// void calculator(const char *str) {
// 	t_node_value* head_value = (t_node_value*) allocate(NUMBER);
// 	t_node_oper* head_oper = (t_node_oper*) allocate(OPERAND);
// 	head_value->previos = NULL;
// 	head_oper->previos =  NULL;
// }