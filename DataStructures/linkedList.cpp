#include "linkedList.h"



ListNode* createNode(int data)
{
	ListNode* newNode = new ListNode;
	newNode->value = data;
	newNode->next = nullptr;
	return newNode;
}
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
