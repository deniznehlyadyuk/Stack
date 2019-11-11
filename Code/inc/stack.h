#ifndef STACK_H
#define STACK_H

class Node;

class Stack {
private:
	int m_size;
	Node* m_top;

public:
	Stack();

	void push(int data);
	void pop();

	int top();
	int size();
	bool empty();
};

#endif // !STACK_H
