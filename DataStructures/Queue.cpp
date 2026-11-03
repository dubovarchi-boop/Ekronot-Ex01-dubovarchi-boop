#include "Queue.h"


bool isFull(Queue* s)
{
	if (s->capacity == s->size)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void enqueue(Queue* q, unsigned int value)
{
    if (isFull(q) == true)
    {
        return;
    }

    q->arr[q->capacity] = value;
    q->capacity++;
}
bool isEmpty(Queue* s)
{
	if (s->capacity == 0)
	{
		return true;
	}
	return false;
}
int dequeue(Queue* q)
{
	if (isEmpty(q) == true)
	{
		return -1;
	}
	int value = q->arr[0];
	for (int i = 0; i < q->capacity - 1; i++)
	{
		q->arr[i] = q->arr[i + 1];
	}
	q->capacity--;
	return value;
}
void cleanQueue(Queue* q)
{
	if (q->arr != nullptr)
	{
		delete[] q->arr;
		q->arr = nullptr;
	}
	q->size = 0;
	q->capacity = 0;
}
void initQueue(Queue* q, unsigned int size)
{
	q->arr = new int[size];
	q->size = size;
	q->capacity = 0;
}