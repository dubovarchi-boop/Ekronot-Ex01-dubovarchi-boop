#include "Queue.h"

//this function checks if the queue is full or not by comparing the capacity of the queue with its size
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
//this function adds a new element to the end of the queue if the queue is not full it adds the new value to the array at 
// the index of capacity and increases tyhe capacity by one
void enqueue(Queue* q, unsigned int value)
{
    if (isFull(q) == true)
    {
        return;
    }

    q->arr[q->capacity] = value;
    q->capacity++;
}
//this function checks if the queue is empty or not by checking if the capacity of the queue is zero
bool isEmpty(Queue* s)
{
	if (s->capacity == 0)
	{
		return true;
	}
	return false;
}
//this function removes the first element from the queue and returns its value if the queue is empty it returns -1
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
//this function cleans up the queue by deleting the array and setting the size and capacity to zero
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
//this function initialize the queue by allocating memory for the array and setting the size and capacity to zero
void initQueue(Queue* q, unsigned int size)
{
	q->arr = new int[size];
	q->size = size;
	q->capacity = 0;
}