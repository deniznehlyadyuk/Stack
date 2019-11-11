#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stack.h"

std::string randomString() {
	std::string src = "LAKSJDIVMVZQPEIRUTYEMCZ";
	return src.substr(0, rand()%(src.length()-15)+1);
}

int main()
{
	srand(static_cast<unsigned int> (time(NULL)));

	Stack<int> stack_i;
	Stack<float> stack_f;
	Stack<bool> stack_b;
	Stack<char> stack_c;
	Stack<std::string> stack_s;
	
	std::cout << "Test: Push element to stack\t\t(integer)\t";
	for (int i = 0; i < rand() % 15 + 5; i++) {
		stack_i.push(rand() % 15 + 5);
	}
	std::cout << "Passed!" << std::endl;

	std::cout << "Test: Access size of stack\t\t(integer)\t" << stack_i.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(integer)\t" << stack_i.empty() << std::endl;

	std::cout << "Test: Access 'top' and delete 'top'\t(integer)\t";
	while (!stack_i.empty()) {
		std::cout << stack_i.top() << " ";
		stack_i.pop();
	}
	std::cout << std::endl;

	std::cout << "Test: Access size of stack\t\t(integer)\t" << stack_i.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(integer)\t" << stack_i.empty() << std::endl << std::endl;

	std::cout << "Test: Push element to stack\t\t(float)\t\t";
	for (int i = 0; i < rand() % 15 + 5; i++) {
		stack_f.push((rand() % 15 + 5)*0.7);
	}
	std::cout << "Passed!" << std::endl;

	std::cout << "Test: Access size of stack\t\t(float)\t\t" << stack_f.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(float)\t\t" << stack_f.empty() << std::endl;

	std::cout << "Test: Access 'top' and delete 'top'\t(float)\t\t";
	while (!stack_f.empty()) {
		std::cout << stack_f.top() << " ";
		stack_f.pop();
	}
	std::cout << std::endl;

	std::cout << "Test: Access size of stack\t\t(float)\t\t" << stack_f.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(float)\t\t" << stack_f.empty() << std::endl << std::endl;

	std::cout << "Test: Push element to stack\t\t(bool)\t\t";
	for (int i = 0; i < rand() % 15 + 5; i++) {
		stack_b.push(rand()%2);
	}
	std::cout << "Passed!" << std::endl;

	std::cout << "Test: Access size of stack\t\t(bool)\t\t" << stack_b.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(bool)\t\t" << stack_b.empty() << std::endl;

	std::cout << "Test: Access 'top' and delete 'top'\t(bool)\t\t";
	while (!stack_b.empty()) {
		std::cout << stack_b.top() << " ";
		stack_b.pop();
	}
	std::cout << std::endl;

	std::cout << "Test: Access size of stack\t\t(bool)\t\t" << stack_b.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(bool)\t\t" << stack_b.empty() << std::endl << std::endl;

	std::cout << "Test: Push element to stack\t\t(char)\t\t";
	for (int i = 0; i < rand() % 15 + 5; i++) {
		stack_c.push((char)(rand() % (127-33) + 33));
	}
	std::cout << "Passed!" << std::endl;

	std::cout << "Test: Access size of stack\t\t(char)\t\t" << stack_c.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(char)\t\t" << stack_c.empty() << std::endl;

	std::cout << "Test: Access 'top' and delete 'top'\t(char)\t\t";
	while (!stack_c.empty()) {
		std::cout << stack_c.top() << " ";
		stack_c.pop();
	}
	std::cout << std::endl;

	std::cout << "Test: Access size of stack\t\t(char)\t\t" << stack_c.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(char)\t\t" << stack_c.empty() << std::endl << std::endl;

	std::cout << "Test: Push element to stack\t\t(string)\t";
	for (int i = 0; i < rand() % 15 + 5; i++) {
		stack_s.push(randomString());
	}
	std::cout << "Passed!" << std::endl;

	std::cout << "Test: Access size of stack\t\t(string)\t" << stack_s.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(string)\t" << stack_s.empty() << std::endl;

	std::cout << "Test: Access 'top' and delete 'top'\t(string)\t";
	while (!stack_s.empty()) {
		std::cout << stack_s.top() << " ";
		stack_s.pop();
	}
	std::cout << std::endl;

	std::cout << "Test: Access size of stack\t\t(string)\t" << stack_s.size() << std::endl;
	std::cout << "Test: Is empty\t\t\t\t(string)\t" << stack_s.empty() << std::endl << std::endl;

	system("pause");
	return 0;
}