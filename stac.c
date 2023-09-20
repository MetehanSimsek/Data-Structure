#define _CRT_SECURE_NO_WARNINGS

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

stack* stack_init(int stack_size)
{
	stack* ptr = (stack*)malloc(sizeof(stack));
	if (ptr == '\0') {
		printf("Error, It Couldn't Allocated!\n");
		assert(ptr == '\0');
	}

	ptr->array_size = stack_size;
	ptr->top = -1;
	ptr->data = (stack*)malloc(sizeof(int) * (ptr->array_size));

	if (ptr->data == '\0') {
		printf("Error, It Couldn't Allocated!\n");
		assert(ptr == '\0');
	}

	return ptr;
}

void push(stack* ptr, int value)
{
	if (ptr->top < ptr->array_size - 1) {
		++ptr->top;
		ptr->data[ptr->top] = value;
	}
	if (ptr->top == ptr->array_size - 1)
		isFull(ptr->top);
	else if (ptr->top == -1 || ptr->top == '\0')
		isEmpty(ptr->top);
	return ptr;
}

void pop(stack* delete_ptr)
{
	if (delete_ptr->top == -1) {
		printf("Error! Already Not Created!\n");
		return EOF;
	}
	delete_ptr->top--;

}

void isFull(int top_value)
{
	return (stck_ptr->top == stck_ptr->array_size - 1);
	//if (top_value == stck_ptr->array_size - 1)
	//{
	//	printf("Stack is FULL!\n");
	//}
}

void isEmpty(int top_value)
{
	return (stck_ptr->top == -1);
	//if (top_value == '\0')
	//{
	//	printf("Stack is Empty!\n");
	//}
}

void print(stack* print_ptr)
{
	for (int i = 0; i <= print_ptr->top; i++) {
		printf("%d \n", *print_ptr->data);
		print_ptr->data++;
	}
}