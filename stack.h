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
void isFull(int top_value);
void isEmpty(int top_value);
void print(stack* print_ptr);
void pop(stack* delete_ptr);

stack* stck_ptr;

#endif // ! 