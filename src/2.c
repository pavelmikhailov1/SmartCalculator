#include <stdio.h>

#define MAX_SIZE 10

typedef struct Stack Stack;
void stackPush(Stack* s, int data);

struct Stack{
    unsigned int head;
    int arr[MAX_SIZE];

    void(*push)(Stack* s, int data);
};

void stackPush(Stack* s, int data) {
    if (s->head < MAX_SIZE) {
        s->arr[s->head] = data;  // push to stack
        printf("Head: %d. Data: %d.\n", s->head, s->arr[s->head]); 
        s->head++;  // move forward
    }

    else
        fprintf(stderr, "Stack is full! (head at: %d)\n", s->head);
}

int main() {
    // Initialize the stack
    Stack s;
    s.head = 0;
    s.push = stackPush;

    // Push the data
    int data = 1;

    int i;
    for (i = 0; i < MAX_SIZE; i++)
        s.push(&s, data++);

    s.push(&s, 100); // 
    s.push(&s, 200); // trying to push to a full stack
    s.push(&s, 300); // 

    return 0;
}