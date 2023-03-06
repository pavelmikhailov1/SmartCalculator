#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


#define OPERAND   0
#define NUMBER 	  1
#define ERROR     1
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

void* push(void *head, void* value, int flag_head) {
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
char get_character(char **str);

int main(int argc, char const *argv[])
{
	char a[10];
	char *p = a;
	t_node_value* head_value = NULL;
	t_node_oper* head_oper = NULL;
	parser("       12345 +     1234 * 5");

	// while (head_value != NULL) 
	// {
		// printf("%d\n", head_value->val);
	// 	head_value = head_value->previos;
	// }
	
	return 0;
}

int parser(char *str) {
	char *result = (char *)calloc(1000, sizeof(char));
	char *str_buf = (char *)calloc(1000, sizeof(char));
	int num_flag_err = 0;
	int i = 0;
	while (*str++) {
		if (*str != ' ') str_buf[i++] = *str;
	}
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
		} else {
			if (*str_buf == '(' && (*(str_buf+1) == '+' || *(str_buf+1) == '-') && isdigit(*(str_buf+2))) {
				result[strlen(result)] = '(';
				result[strlen(result)+1] = '0';
				str_buf++;
				continue;
			}
			if (check_binary_operator())
			result[strlen(result)] = get_character(&str_buf);
			num_flag_err = 0;
		}
	}
	free(str_buf);	
}

char get_character(char **str) {

}

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