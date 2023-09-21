#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
	
	stack* stck_ptr = stack_init(5);

	push(stck_ptr, 1);
	push(stck_ptr, 2);
	push(stck_ptr, 3);
	push(stck_ptr, 4);
	push(stck_ptr, 5);

	pop(stck_ptr);

	print(stck_ptr);


	if (isFull(stck_ptr)) {
		printf("Stack is FULL!\n");
	}

	if (isEmpty(stck_ptr)) {
		printf("Stack is Empty!\n");
	}




	return 0;
}

