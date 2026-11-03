#include "stack.h"

void push(stackNode* s, unsigned int element)
{
	ListNode* newNode = createNode(element);
	addNodeHead(s->values, element);
}
int pop(stackNode* s)
{
	if (isEmpty(s) == true)
	{
		return -1;
	}
	int value = s->values->value;
	s->values = removeNodeHead(s->values);
	return value;
}
void initStack(stackNode* s)
{
	s->data = 0;
	s->values = nullptr;
}
void cleanStack(stackNode* s)
{
	while (s->values != nullptr)
	{
		s->values = removeNodeHead(s->values);
	}
}
bool isEmpty(stackNode* s)
{
	if(s == nullptr || s->values == nullptr)
	{
		return true;
	}
	return false;
}
bool isFull(stackNode* s)
{
	return false;//stack is never full
}	
