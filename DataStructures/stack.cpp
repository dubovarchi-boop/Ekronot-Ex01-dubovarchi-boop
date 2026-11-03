#include "stack.h"
//this function adds a new element to the top of the stack by creating a newnode with the given element and adding it
// to the head of the linkedList that represents the stack
void push(Stack* s, unsigned int element)
{
	ListNode* newNode = createNode(element);
	addNodeHead(s->values, element);
}
//this function removes the top element from the stack and returns its value if the stack is empty it returns -1
int pop(Stack* s)
{
	if (isEmpty(s) == true)
	{
		return -1;
	}
	int value = s->values->value;
	s->values = removeNodeHead(s->values);
	return value;
}
//this function initialize the stack by setting the data to 0 and the values pointer to null
void initStack(Stack* s)
{
	s->data = 0;
	s->values = nullptr;
}
//this function cleans up the stack by removing all the nodes
void cleanStack(Stack* s)
{
	while (s->values != nullptr)
	{
		s->values = removeNodeHead(s->values);
	}
}
//this function checks if the stack is empty or not by checking if the stack pointer is null or if the values pointer is null
bool isEmpty(Stack* s)
{
	if(s == nullptr || s->values == nullptr)
	{
		return true;
	}
	return false;
}
//this function checks if the stack is full or not but since the stack has no size limit it always returns false 
bool isFull(Stack* s)
{
	return false;//stack is never full
}	
