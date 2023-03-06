#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
	double value;
	int priority;
	void *previos;
	void *next;
	void (*push) (int);
}stack;

void push(int val){

}

int main(int argc, char const *argv[])
{
	stack* arr = (stack*)malloc(sizeof(stack));
	arr->push = push;
	arr->push(10);
	
	// stack a = {1, 3, NULL, NULL};
	// stack b = {2, 1, &a, NULL};
	// a.next = &b;
	// stack c = {3, 2, &b, NULL};
	// b.next = &c;

	arr[0] = a;
	printf("%d", arr[0].priority);


	return 0;

	stack *stack = {};
	for (int i = 0; i < 10000; i++){
		stack* node = new_node(elem[i])
		add_to_end_stack(&stack, node)
	}
}


