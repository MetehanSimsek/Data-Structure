#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "SingleList.h"



static node createNode(int create_data) {
	node temp;
	temp = (node)malloc(sizeof(struct linked));
	if (!temp) {
		return NULL;
	}
	else
	{
		temp->data = create_data;
		temp->next = NULL;
	}
	return  temp;
}

node add(int node_data) {
	node temp;
	node next_node ;
	temp = createNode(node_data);
	temp->data = node_data;
	
	if (!head) {
		head = temp;
		//printf("%d		%p\n",node_data, head);
	}
	else {
		next_node = head;
		while (next_node->next != NULL)
		{
			next_node = next_node->next;
		}
		next_node->next = temp;
	}
	return head;
}

node delete(node start, int value) {
	
	node hold = start;
	node free_node = NULL;

	if (start->data == value) {
		free_node = hold;
		hold = free_node->next;
		head = hold;
		free(free_node);
	}

	else {
		while (hold->next != NULL && hold->next->data != value) {
			hold = hold->next;
		}
		free_node = hold->next; // selected
		hold->next = hold->next->next; // new connected node
		free(free_node);
	}

	printf("*****************\n");
	printf("%d is deleted\nNew Node:\n", value);

	return start;
}

void print_node(node head)
{
	while (head){
		printf("%d\n", head->data);
		head = head->next;
	}
}