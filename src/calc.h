#ifndef SRC_CALC_H
#define SRC_CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>


#define OPERAND   	 0
#define NUMBER 	  	 1
#define OK     	 	 0
#define ERROR     	 1
#define ERROR_CH    '!'
#define VALID_CHARACTERS "1234567890.()+-*/^modcsintaqrtlgx"
#define BINARY_OPERATORS "+-*/^m"
#define FUNCTIONS "sctbnvqzo"

typedef struct Stack_oper // передаю 0
{
	char c;
	int priority;
	struct Stack_oper *next;
} t_node_oper;

typedef struct Stack_value // передаю 1
{
	double val;
	struct Stack_value *next;
} t_node_value;


double calculator(char *str);

//functions for parser
int parser(char *str, char *result);
int check_correct_string(char *str);
char get_character(char **str, int *err);
char get_function(char **str);
char get_triginometric_func(char **str);
char get_inverse_triginometric_func(char **str);
char get_sqrt_func(char **str);
char get_log_func(char **str);
char get_mod_func(char **str);
void get_number(char **str, char *result);
double add_number_to_str(char **pointer);

//functions for stack
void* allocate(int flag_head);
void* push(void *head, void* c, int priority, int flag_head);
void* pop(void *head, int flag_head);
double peek(void** head);

//functions for convert to polish notation
int infix_to_polish(char *str, char *polish_str);
int get_priority(char c);
int StackDeallocation(t_node_oper** head_oper, char** polish_str, int count_of_open_bracket);
void WorkingWithClozedBacket(t_node_oper** head_oper, char* polish_str, int* count_of_open_bracket, int *error);

#endif //SRC_CALC_H