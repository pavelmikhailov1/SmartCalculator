#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


#define OPERAND   	 0
#define NUMBER 	  	 1
#define OK     	 	 0
#define ERROR     	 1
#define ERROR_CH    '!'
#define VALID_CHARACTERS "1234567890.()+-*/^modcsintaqrtlgx"

// typedef union Value
// {
// 	__int128_t val_int;
// 	double     val_double;
// } size_of_memory;

// typedef enum Enum {
// 	PLUS,  //0
// 	MINUS, //1
// } operands;

typedef struct Stack_oper // передаю 0
{
	char c;
	int priority;
	struct Stack_oper *next;
} t_node_oper;

typedef struct Stack_value // передаю 1
{
	double val;					///////// есть юнион для разных значений
	struct Stack_value *next;
} t_node_value;

double calculator(char *str);
int infix_to_polish(char *str, char *polish_str);
void* allocate(int flag_head);
void* push(void *head, void* c, int priority, int flag_head);
void* pop(void *head, int flag_head);
int parser(char *str, char *result);
double add_number_to_str(char **pointer);
char get_character(char **str, int *err);
char get_function(char **str);
int check_correct_string(char *str);
void remove_spases(char *str, char **result);
char get_triginometric_func(char **str);
char get_inverse_triginometric_func(char **str);
char get_sqrt_func(char **str);
char get_log_func(char **str);
char get_mod_func(char **str);
int check_error_flags(int error_flag, char *a, char *b);
void free_buffers(char *a, char *b);

void get_number(char **str, char *result);
int get_priority(char c);

int StackDeallocation(t_node_oper** head_oper, char** polish_str, int count_of_open_bracket);

int main(int argc, char const *argv[])
{
	t_node_value* head_value = NULL;
	t_node_oper* head_oper = NULL;
	printf("%f\n", calculator("(1221+((2mod5)+(2+3))"));
	//"1+cos(sin(5) + 1)"
	// /2.-5*6-(sqrt(2mod5))

//НАПИСАТЬ ФУНКЦИЮ ПРОВЕРКИ СТРОКИ ПОСЛЕ ПАРСЕРА! 
// "+sin(sqrt(2)*10asin(1))" между числом и функцией должени быть оператор и тд
//не может быть двух операторов подряд
//количество открывающихся скобок равно открывающимся
//после числа с точкой не должно быть точки

	// while (head_value != NULL) 
	// {
		// printf("%d\n", head_value->val);
	// 	head_value = head_value->previos;
	// }
	
	return 0;
}
// void remove_spases(char *str, char **result) {
// 	char *p = str;
// 	int i = 0;
// 	while (*p != '\0') {
// 		if (*p != ' ') {
// 			*((*result)+i) = *p;
// 			i++;
// 		} else {

// 		}
// 		p++;
// 	}
// }

void* allocate(int flag) {
	return flag ? calloc(32, 1) : calloc(16, 1);
}

void* push(void* head, void* value, int priority, int flag_head) {
	void *current = NULL;
	if (flag_head == 0) {
		current = (t_node_oper*)allocate(OPERAND);
		((t_node_oper*)current)->priority = priority;
		((t_node_oper*)current)->c = *((char*)value);
		((t_node_oper*)current)->next = (t_node_oper*)head;
	} else {
		current = (t_node_value*)allocate(NUMBER);
		((t_node_value*)current)->val = *((double *)value);
		((t_node_value*)current)->next = (t_node_value*)head;
	}
	return (void*)current;
}

void* pop(void *head, int flag_head) {
	void *buff = NULL;
	buff = head;
	if (flag_head == 0) {
		head = ((t_node_oper *)head)->next;
	} else {
		head = ((t_node_value *)head)->next;
	}
	free(buff);
	return (void *)head;
}

double calculator(char *str) {
	t_node_value* head_value = NULL;
	char *buff = (char *)calloc(1000, sizeof(char));
	char *polish_str = (char *)calloc(1000, sizeof(char));
	int status = OK;
	printf("%s\n", buff);
	status = parser(str, buff);
	
	if (status == OK) {
		status = infix_to_polish(buff, polish_str);
	}


	free(buff);
	return status;
}

int StackDeallocation(t_node_oper** head_oper, char** polish_str, int count_of_open_bracket) {
	int error = OK;
	if (count_of_open_bracket == 0) {
		error = ERROR;
	} else {
		while((*head_oper)->c != '(' && head_oper != NULL) {
			(*polish_str)[strlen(*polish_str)] = (*head_oper)->c;
			(*polish_str)[strlen(*polish_str)] = ' ';
			*head_oper = pop((void *)*head_oper, OPERAND);
		}
	}
	return error;
}

int infix_to_polish(char *str, char *polish_str) {
	t_node_oper* head_oper = NULL;
	int error = OK;
	int flag = 0;
	int count_of_open_bracket = 0;
	while (*str)
	{
		if (isdigit(*str)) {
			get_number(&str, polish_str);
			polish_str[strlen(polish_str)] = ' ';
		} else {
			int priority = get_priority(*str);
			if (*str == '(')
				count_of_open_bracket++;

			if (*str == ')') {
				if ((StackDeallocation(&head_oper, &polish_str, count_of_open_bracket) == ERROR) || head_oper == NULL) {
					error = ERROR;
					break;
				} else {
					count_of_open_bracket--;
					head_oper = pop((void *)head_oper, OPERAND);
					if (head_oper != NULL) { 
						if (strchr("sctbnvqzo", head_oper->c) != NULL) { //если после открытой скобки идет функция, то ее тоже помещаем в выходную строку
							polish_str[strlen(polish_str)] = head_oper->c;
							polish_str[strlen(polish_str)] = ' ';
							head_oper = pop((void *)head_oper, OPERAND);
						}
					}
					str++;
					continue;
				}
			}

			if (head_oper == NULL || priority == -1) { // если стек пустой и символ открытая скобка
				head_oper = (t_node_oper *)push((void *)head_oper, (void *)str, priority, 0);
				str++;
				continue;
			} else {
				while (head_oper != NULL && priority <= head_oper->priority) {
					polish_str[strlen(polish_str)] = head_oper->c;
					polish_str[strlen(polish_str)] = ' ';
					head_oper = pop((void *)head_oper, OPERAND);
				}
			}
			head_oper = (t_node_oper *)push((void *)head_oper, (void *)str, priority, 0);
			str++;
		}
		printf("%s\n", polish_str);
	}
	while (head_oper != NULL) {
		if (head_oper->c == '(') {
			error = ERROR;
			break;
		}
		polish_str[strlen(polish_str)] = head_oper->c;
		polish_str[strlen(polish_str)] = ' ';
		head_oper = pop((void *)head_oper, OPERAND);
	}
	printf("%s\n", polish_str);
	return error;
}



int get_priority(char c) {
	int priority = 0;
	if (strchr("+-", c) != NULL) priority = 1;
	else if (strchr("*/m", c) != NULL) priority = 2;
	else if (strchr("^", c) != NULL) priority = 3;
	else if (strchr("sctbnvqzo", c) != NULL) priority = 4;
	else if (strchr("(", c) != NULL) priority = -1;
	return priority;
}

void get_number(char **str, char *result) {
	double num = add_number_to_str(str);
	char buff[50];
	sprintf(buff, "%.13f", num);
	strcat(result, buff);
}

int parser(char *str, char *result) {
	// char *str_buf = (char *)calloc(1000, sizeof(char));
	char *str_buf = NULL;
	str_buf = strdup(str);
	char *p = str_buf;
	int error = OK;
	int num_flag_err = 0;
	int char_flag_err = 0;
	// remove_spases(str, &str_buf);
	printf("%s\n", str_buf);
	if (*str_buf == '+' || *str_buf == '-') { //если строка начинается с унарного + или -
		result[0] = '0';
	}
	while (*str_buf) {
		if (error == ERROR) break;
		if (strchr(VALID_CHARACTERS, *str_buf) == NULL) { //проверка каждого символа на валидность
			error = ERROR;
			printf("aboba\n");
			break;
		}
		if (isdigit(*str_buf) || *str_buf == '.') { //если символ - цифра
			if (num_flag_err == ERROR) {
				error = ERROR;
			}
			get_number(&str_buf, result); // помещаем число в результирующую строку
			// double num = get_number(&str_buf);
			// char buff[50];
			// sprintf(buff, "%.13f", num);
			// strcat(result, buff);
			num_flag_err = ERROR;
		} else { //если символ - символ
			if (*str_buf == '(' && (*(str_buf+1) == '+' || *(str_buf+1) == '-') 
								&& (isdigit(*(str_buf+2)) || strchr("sctbnvqzo", *(str_buf+2)) != NULL)) { //если скобка а за ней унарный оператор(обработка краевой ситуации)
				strcat(result, "(0");
				str_buf++;
				continue;
			}
			result[strlen(result)] = get_character(&str_buf, &char_flag_err); //помещаем символ в результирующую строку
			if (char_flag_err == ERROR) {
				error = ERROR;
			}
			num_flag_err = OK;
		}
	}
	if (!error) {
		if (check_correct_string(result) == ERROR) {
			error = ERROR;
		}
	}
	free(p);
	return error ? ERROR : OK;
}

int check_correct_string(char *str) { //обработка возможных ошибок в строке после парсинга
	int status = OK;
	char *ptr = str;
	while (*ptr) {
		if (status == ERROR) break;
		if ((strchr("+-*/^", *ptr) != NULL) && (strchr("+-*/^", *(ptr+1)) != NULL)) { //если в строке идут подряд два оператора
			status = ERROR;
		} else if (*ptr == ')' && (strchr("+-*/^)", *(ptr+1)) == NULL && *(ptr+1) != '\0')) { //после скобки должен быть оператор или конец строки
			status = ERROR;
		} else if (*ptr == 'm' && (!isdigit(*(ptr+1)) && *(ptr+1) != '(') && (!isdigit(*(ptr-1)) && *(ptr-1) != '(')) { //между функцией мод обязанны быть два числа или скобки
			status = ERROR;
		} else if (strchr("+-*/^", *ptr) != NULL && (*(ptr+1) == ')' || *(ptr+1) == '\0')) {
			status = ERROR;
		}
		ptr++;
	}
	return status;
}

char get_character(char **str, int *err) {
	char res = 0;
	if (strchr("+-*/^", **str) != NULL) { //если текущий символ оператор +-*/^
		char tmp = **str;
		(*str)++;
		return tmp;
	} else if (strchr("cstalm", **str) != NULL) { //если текущий символ начало функции
		res = get_function(str);
		if (res == '!') *err = 1; //некорректный ввод
	} else if (**str == '(' || **str == ')') { //если текущий символ скобка ()
		char tmp = **str;
		(*str)++;
		return tmp;
	} else if (**str == 'm') { //если текущий символ 'm'(если это mod)
		if (*(*str-1) != ')' && !isdigit(*(*str-1)) && *(*str-1) != 'x') { //если предыдущий символ не цифра или ')' то ошибка
			*err = 1;
			printf("%c\n", *(*str-1));
		} else {
			res = get_function(str);
		}
	} else if (strchr("cstalm", **str) == NULL) {
		*err = 1;
	}
	return res;
}

char get_function(char **str) {
	char res = '!';
	if (strchr("cst", **str) != NULL && *(*str+1) != 'q') { //если это тригонометрическая функция
		res = get_triginometric_func(str);
	} else if (**str == 'a') { //если это обратная тригонометрическая функция
		res = get_inverse_triginometric_func(str);
	} else if (**str == 's' && *(*str+1) == 'q') { //если это корень
		res = get_sqrt_func(str);
	} else if (**str == 'l') { //если это логарифм
		res = get_log_func(str);
	} else if (**str == 'm') { //если это мод
		res = get_mod_func(str);
	}
	return res;
}

char get_mod_func(char **str) {
	char res = '!';
	char buff[4];
	strncpy(buff, *str, 3);
	buff[3] = '\0';
	if (strcmp("mod", buff) == 0) {
		*str = *str + 3;
		res = 'm';
	}
	return res;
}

char get_log_func(char **str) {
	char res = '!';
	char buff_ln[4];
	char buff_log[5];
	strncpy(buff_ln, *str, 3);
	strncpy(buff_log, *str, 4);
	buff_ln[3] = '\0';
	buff_log[4] = '\0';
	if (strcmp("ln(", buff_ln) == 0) {
		*str = *str + 2;
		res = 'z'; //возвращаем z если в строке корректный ln()
	} else if (strcmp("log(", buff_log) == 0) {
		*str = *str + 3;
		res = 'o'; //возвращаем x если в строке корректный log()
	}
	return res;
}

char get_sqrt_func(char **str) {
	char res = '!';
	char buff[6];
	strncpy(buff, *str, 5);
	buff[5] = '\0';
	if (strcmp("sqrt(", buff) == 0) {
		*str = *str + 4;
		res = 'q'; //возвращаем q если в строке корректный sqrt()
	}
	return res;
}

char get_inverse_triginometric_func(char **str) {
	char res = '!';
	char buff[6];
	strncpy(buff, *str, 5);
	buff[5] = '\0';
	if (strcmp("acos(", buff) == 0) {
		*str = *str + 4;
		res = 'b'; //возвращаем b если в строке корректный acos()
	} else if (strcmp("asin(", buff) == 0) {
		*str = *str + 4;
		res = 'n'; //возвращаем n если в строке корректный asin()
	} else if (strcmp("atan(", buff) == 0) {
		*str = *str + 4;
		res = 'v'; //возвращаем v если в строке корректный atan()
	}
	return res;
}

char get_triginometric_func(char **str) {
	char res = '!';
	char buff[5];
	strncpy(buff, *str, 4);
	buff[4] = '\0';
	if (strcmp("sin(", buff) == 0) {
		*str = *str + 3;
		res = 's'; //возвращаем s если в строке корректный sin()
	} else if (strcmp("cos(", buff) == 0) {
		*str = *str + 3;
		res = 'c'; //возвращаем c если в строке корректный cos()
	} else if (strcmp("tan(", buff) == 0) {
		*str = *str + 3;
		res = 't'; //возвращаем t если в строке корректный tan()
	}
	return res;
 }

double add_number_to_str(char **pointer) {
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