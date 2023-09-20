#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main() {

	stck_ptr = stack_init(5);

	push(stck_ptr, 1);
	push(stck_ptr, 2);
	push(stck_ptr, 3);
	push(stck_ptr, 4);
	push(stck_ptr, 5);
	
	pop(stck_ptr);

	print(stck_ptr);

	return 0;
}

