#include "utils.h"
#include "stack.h"

void reverse(int* nums, unsigned int size)
{
	stackNode* s = new stackNode;
	initStack(s);
	for(int i = 0; i < size; i++)
	{
		push(s,nums[i]);
	}

	for(int i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
	cleanStack(s);
	delete(s);
}

int* reverse10()
{
	int* nums = new int[10];
	for(int i = 0; i < 10; i++)
	{
		std::cin >> nums[i];
	}
	reverse(nums, 10);
}
