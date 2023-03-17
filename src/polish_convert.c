#include "calc.h"

int infix_to_polish(char *str, char *polish_str) {
	t_node_oper* head_oper = NULL;
	int error = OK;
	int flag = 0;
	int count_of_open_bracket = 0;
	while (*str)
	{
		// printf("!!\n");
		if (isdigit(*str)) {
			get_number(&str, polish_str);
			polish_str[strlen(polish_str)] = ' ';
		} else {
			int priority = get_priority(*str);
			if (*str == '(')
				count_of_open_bracket++;

			if (*str == ')') {
				WorkingWithClozedBacket(&head_oper, polish_str, &count_of_open_bracket, &error);
				if (error == ERROR) 
					break;
				str++;
				continue;
			}

			if (head_oper == NULL || priority == -1) { // если стек пустой и символ открытая скобка
				head_oper = (t_node_oper *)push((void *)head_oper, (void *)str, priority, 0);
				str++;
				continue;
			} else {
				while (head_oper != NULL && (priority < head_oper->priority || (priority == head_oper->priority && priority != 3))) {
					polish_str[strlen(polish_str)] = head_oper->c;
					polish_str[strlen(polish_str)] = ' ';
					head_oper = (t_node_oper*)pop((void *)head_oper, OPERAND);
				}
			}
			head_oper = (t_node_oper *)push((void *)head_oper, (void *)str, priority, OPERAND);
			str++;
			// printf("%c\n", head_oper->c);
			// printf("%c\n", *str);
		}
		// printf("%s\n", polish_str);
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
	// printf("%s\n", polish_str);
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

void WorkingWithClozedBacket(t_node_oper** head_oper, char* polish_str, int* count_of_open_bracket, int *error) {
	if ((StackDeallocation(head_oper, &polish_str, *count_of_open_bracket) == ERROR) || *head_oper == NULL) {
		*error = ERROR;
	} else {
		(*count_of_open_bracket)--;
		*head_oper = pop((void *)*head_oper, OPERAND);
		if (*head_oper != NULL) { 
			if (strchr("sctbnvqzo", (*head_oper)->c) != NULL) { //если после открытой скобки идет функция, то ее тоже помещаем в выходную строку
				polish_str[strlen(polish_str)] = (*head_oper)->c;
				polish_str[strlen(polish_str)] = ' ';
				*head_oper = pop((void *)*head_oper, OPERAND);
			}
		}
	}
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