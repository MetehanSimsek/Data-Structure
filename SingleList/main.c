#include "SingleList.h"
#include <stdlib.h>
#include <stdio.h>





int main(void)
{
	add(5);
	add(10);
	add(15);
	add(20);
	print_node(head);
	delete(head, 5);
	print_node(head);
	return EXIT_SUCCESS;
}