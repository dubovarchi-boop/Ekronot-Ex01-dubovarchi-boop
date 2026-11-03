#include "utils.h"
#include "stack.h"

//this function reverses the order of the elements in an array of integers using a stack data structure its
// takes a pointer to an array of integers and the size of the arrayas parameters the function first initializes a stack
//then push each element of the array onto the stack after thatit pops each element from the stack and 
//return it back to the array itsz reversing the order of the elements in teh end it cleans up the stack and deletes the stack pointer
void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
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
//this function asks the user to enter ten integers and returns a pointer to an array of integers containing the reversed 
//order of the entered integers
int* reverse10()
{
	int* nums = new int[10];
	std::cout << "Please enter 10 integers to reverse: " << std::endl;
	for(int i = 0; i < 10; i++)
	{
		std::cin >> nums[i];
	}
	reverse(nums, 10);

	return nums;
}
