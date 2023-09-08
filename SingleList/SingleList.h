#pragma once
#ifndef SINGLELIST_H
#define SINGLELIST_H

struct linked {
	int data;
	struct linked* next;
};

typedef struct linked* node;

node createNode(int create_data);
node add(int node_data);
node delete(node start, int value);
void print_node(node head);

node head;

#endif // ! 


