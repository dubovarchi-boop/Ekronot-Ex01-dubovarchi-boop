#include "linkedList.h"


int main()
{
	stackNode* first = nullptr;
	stackNode* last = nullptr;
	int length;
	std::cout << "Enter the length of the list: ";
	std::cin >> length;
	for (int i = 0; i < length; i++)
	{
		int data;
		std::cout << "Enter the data for node " << i + 1 << ": ";
		std::cin >> data;
		first = addNodeHead(first, data);
	}
	while (first != nullptr)
	{
		std::cout << "Node data: " << first->data << std::endl;
		first = removeNodeHead(first);
	}

}

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
