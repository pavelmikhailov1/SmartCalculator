#include "calc.h"

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

double peek(void** head) {
	return ((t_node_value*)*head)->val;
}

void* allocate(int flag) {
	return flag ? calloc(32, 1) : calloc(16, 1);
}