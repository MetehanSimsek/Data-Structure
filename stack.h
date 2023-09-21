#ifndef SINGLELIST_H
#define SINGLELIST_H

struct stack {
	int top;
	int array_size;
	int* data;

};
typedef struct stack stack;

stack* stack_init(int stack_size);
void push(stack* ptr, int value);
int isFull(const stack* ptr);
int isEmpty(const stack* ptr);
void print(stack* print_ptr);
void pop(stack* delete_ptr);

#endif // ! 