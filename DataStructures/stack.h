#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct stackNode
{
	int data;
	struct stackNode* next;
} stackNode;


void push(stackNode* s, unsigned int element);
int pop(stackNode* s); // Return -1 if stack is empty
void initStack(stackNode* s);
void cleanStack(stackNode* s);

bool isEmpty(stackNode* s);
bool isFull(stackNode* s);

#endif // STACK_H#pragma once
