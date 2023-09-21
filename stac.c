#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"



stack* stack_init(int stack_size)
{
	stack* ptr = (stack*)malloc(sizeof(stack));
	if (ptr == '\0') {
		return NULL;
	}

	ptr->array_size = stack_size;
	ptr->top = -1;
	ptr->data = (int*)malloc(sizeof(int) * (ptr->array_size));

	if (ptr->data == '\0') {
		return NULL;
	}

	return ptr;
}

void push(stack* ptr, int value)
{
	if (ptr->top < ptr->array_size - 1) {
		++ptr->top;
		ptr->data[ptr->top] = value;
	}
	//if (ptr->top == ptr->array_size - 1)
	//	return;
	//	//isFull(ptr->top);
	//else if (ptr->top == -1 || ptr->top == '\0')
	//	//isEmpty(ptr->top);
	//	printf("hi");
	return ptr;
}

void pop(stack* pop_ptr)
{
	if (pop_ptr->top == -1) {
		printf("Error! Already Not Created!\n");
		return EOF;
	}
	pop_ptr->top--;
}

int isFull(const stack* ptr)
{
	return (ptr->top == ptr->array_size - 1);
}

int isEmpty(const stack* ptr)
{
	return (ptr->top == -1);
}

void print(stack* print_ptr)
{
	for (int i = 0; i <= print_ptr->top; i++) {
		printf("%d \n", *print_ptr->data);
		print_ptr->data++;
	}
}