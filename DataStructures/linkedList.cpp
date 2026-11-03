#include "linkedList.h"



stackNode* createNode(int data)
{
	stackNode* newNode = new stackNode;
	newNode->data = data;
	newNode->next = nullptr;
	return newNode;
}
stackNode* addNodeHead(stackNode* first, int data)
{
	stackNode* current = first;
	stackNode* newNode = createNode(data);
	if (first == nullptr)
	{
		return newNode;
	}

	newNode->next = first;
	return newNode;
}
stackNode* removeNodeHead(stackNode* first)
{
	if (first == nullptr)
	{
		return nullptr;
	}
	stackNode* newFirst = first->next;
	delete first;
	return newFirst;
}
void push(stackNode* s, unsigned int element)
{
	s = addNodeHead(*s, element);
}
