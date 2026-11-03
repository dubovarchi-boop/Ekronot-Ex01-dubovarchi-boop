#include "linkedList.h"


//this function creates a new node for a linked list with the given data value and returns a pointer to the new node
ListNode* createNode(int data)
{
	ListNode* newNode = new ListNode;
	newNode->value = data;
	newNode->next = nullptr;
	return newNode;
}
//this function adds a new node with the given data value to the head of a linked list and returns a pointer to the new head of the list
ListNode* addNodeHead(ListNode* first,int data)
{
	ListNode* newNode = createNode(data);
	if (first == nullptr)
	{
		return newNode;
	}

	newNode->next = first;
	return newNode;
}
//this function removes the head node from a linked list and returnss a pointer to the new head of the list
ListNode* removeNodeHead(ListNode* first)
{
	if (first == nullptr)
	{
		return nullptr;
	}
	ListNode* newFirst = first->next;
	delete first;
	return newFirst;
}
