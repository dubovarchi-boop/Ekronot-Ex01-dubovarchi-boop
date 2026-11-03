#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

typedef struct ListNode
{
	int value;
	struct ListNode* next;
} ListNode;

ListNode* createNode(int data);
ListNode* addNodeHead(ListNode* first, int data);
ListNode* removeNodeHead(ListNode* first);

#endif // LINKEDLIST_H
