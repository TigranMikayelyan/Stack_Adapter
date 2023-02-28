#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template<typename T>
class Stack
{
public:
	Stack();
	~Stack();
	Stack(T);
	Stack(const Stack<T>&);
	Stack(Stack<T>&&);
public:	
	Stack& operator=(const Stack<T>&);
	Stack& operator=(Stack<T>&&);
	const T& operator[](int) const;
	T& operator[](int);
	bool operator==(Stack<T>&);
	bool operator!=(Stack<T>&);
	bool operator>(const Stack<T>&);
	bool operator<(const Stack<T>&);
	bool operator>=(const Stack<T>&);
	bool operator<=(const Stack<T>&);
	friend std::ostream& operator<<(std::ostream&, const Stack<T>&);
public:
	void push(T);
	void pop();
	int size();
	bool empty();
	void swap(Stack<T>&);
	const T& top(int) const;
	T& top(int);
	void print();
private:
	std::vector<T> m_arr;
};
#endif // STACK_H
