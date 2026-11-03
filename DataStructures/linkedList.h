#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "stack.h"
#include <iostream>

typedef struct ListNode
{
	int value;
	struct ListNode* next;
} ListNode;

stackNode* createNode(int data);
stackNode* addNodeHead(stackNode* first, int data);
stackNode* removeNodeHead(stackNode* first);

#endif // LINKEDLIST_H
