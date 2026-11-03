#include <iostream>


int main() {
	int& x = getDynamicVar();
}
int& getDynamicVar()
{
	int* x = new int(10);
	return *x;
}