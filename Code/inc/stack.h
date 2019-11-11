#ifndef STACK_H
#define STACK_H

template<typename T>
class Node {
public:
	T m_data;
	Node<T>* m_next;
};

template<typename T>
class Stack {
private:
	int m_size;
	Node<T>* m_top;

public:
	Stack();

	void push(T data);
	void pop();

	T top();
	int size();
	bool empty();
};

template<typename T>
Stack<T>::Stack() {
	m_top = nullptr;
	m_size = 0;
}

template<typename T>
void Stack<T>::push(T data) {
	Node<T>* tmp = new Node<T>;

	tmp->m_data = data;
	tmp->m_next = m_top;
	m_top = tmp;
	m_size++;
}

template<typename T>
void Stack<T>::pop() {
	if (m_top == nullptr) {
		std::cerr << "Stack already empty" << std::endl;
	}
	else {
		if (--m_size == 0) {
			m_top = nullptr;
		}
		else {
			Node<T>* tmp = m_top->m_next;
			delete m_top;
			m_top = tmp;
		}
	}
}

template<typename T>
T Stack<T>::top() {
	if (m_top == nullptr) {
		std::cerr << "Stack is empty" << std::endl;
		return 0;
	}
	else {
		return m_top->m_data;
	}
}

template<typename T>
int Stack<T>::size() {
	return m_size;
}

template<typename T>
bool Stack<T>::empty() {
	if (m_top == nullptr) {
		return 1;
	}
	else {
		return 0;
	}
}

#endif // !STACK_H
