#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stack.h"

int main()
{
	srand(static_cast<unsigned int> (time(NULL)));

	Stack stack;

	std::cout << "Test: Pushing elements\t\t";
	for (int i = 0; i < rand() % 15 + 5; i++) {
		stack.push(rand() % 20 + 5);
	}
	std::cout << "Passed!" << std::endl;

	std::cout << "Test: Access stack size\t\t" << stack.size() << std::endl;

	std::cout << "Test: Access stack top\t\t" << stack.top() << std::endl;

	std::cout << "Test: Poping element\t\t";
	stack.pop();
	std::cout << "Passed!" << std::endl;

	std::cout << "Test: Access stack top\t\t" << stack.top() << std::endl;

	std::cout << "Test: Is Empty\t\t\t" << stack.empty() << std::endl;

	std::cout << "Test: Delete all elements\t";
	while (!stack.empty()) {
		std::cout << stack.top() << " ";
		stack.pop();
	}
	std::cout << std::endl;

	std::cout << "Test: Is Empty\t\t\t" << stack.empty() << std::endl;

	system("pause");
	return 0;
}