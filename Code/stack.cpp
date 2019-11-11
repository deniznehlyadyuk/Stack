#include <iostream>
#include "stack.h"

class Node {
public:
	int m_data;
	Node* m_next;
};

Stack::Stack() {
	m_top = nullptr;
	m_size = 0;
}

void Stack::push(int data) {
	Node* tmp = new Node;
		
	tmp->m_data = data;
	tmp->m_next = m_top;
	m_top = tmp;
	m_size++;
}

void Stack::pop() {
	if (m_top == nullptr) {
		std::cerr << "Stack already empty" << std::endl;
	} else {
		if (--m_size == 0) {
			m_top = nullptr;
		} else {
			Node* tmp = m_top->m_next;
			delete m_top;
			m_top = tmp;
		}
	}
}

int Stack::top() {
	if (m_top == nullptr) {
		std::cerr << "Stack is empty" << std::endl;
		return 0;
	} else {
		return m_top->m_data;
	}
}

int Stack::size() {
	return m_size;
}

bool Stack::empty() {
	if (m_top == nullptr) {
		return 1;
	} else {
		return 0;
	}
}