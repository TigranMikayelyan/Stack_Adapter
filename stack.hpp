#include "stack.h"

template <typename T>
Stack<T>::Stack() : m_arr{}
{}

template <typename T>
Stack<T>::~Stack()
{
	m_arr.clear();
}

template <typename T>
Stack<T>::Stack(T value)
{
	m_arr.push_back(value);
}

template <typename T>
Stack<T>::Stack(const Stack<T>& rhs)
{
	m_arr.clear();
	m_arr = rhs.m_arr;
}

template <typename T>
Stack<T>::Stack(Stack<T>&& rhs)
{
	m_arr.clear();
	m_arr = rhs.m_arr;
	rhs.m_arr.clear();
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	m_arr.clear();
	m_arr = rhs.m_arr;
	return *this;
}

template <typename T>
Stack<T>& Stack<T>::operator=(Stack<T>&& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	m_arr.clear();
	m_arr = rhs.m_arr;
	rhs.m_arr.clear();
	return *this;
}

template <typename T>
const T& Stack<T>::operator[](int index) const
{
	if (index < 0 || index >= m_arr.size())
	{
		throw std::out_of_range("Invalid index!!!");
	}
	return m_arr[index];
}

template <typename T>
T& Stack<T>::operator[](int index)
{
	if (index < 0 || index >= m_arr.size())
	{
		throw std::out_of_range("Invalid index!!!");
	}
	return m_arr[index];
}

template <typename T>
bool Stack<T>::operator==(Stack<T>& rhs)
{
	if (m_arr == rhs.m_arr)
	{
		return true;
	}
	return false;
}

template <typename T>
bool Stack<T>::operator!=(Stack<T>& rhs)
{
	if (m_arr != rhs.m_arr)
	{
		return true;
	}
	return false;
}

template <typename T>
bool Stack<T>::operator>(const Stack<T>& rhs)
{
	if (m_arr > rhs.m_arr)
	{
		return true;
	}
	return false;
}

template <typename T>
bool Stack<T>::operator<(const Stack<T>& rhs)
{
	if (m_arr < rhs.m_arr)
	{
		return true;
	}
	return false;
}

template <typename T>
bool Stack<T>::operator>=(const Stack<T>& rhs)
{
	if (m_arr < rhs.m_arr)
	{
		return false;
	}
	return true;
}

template <typename T>
bool Stack<T>::operator<=(const Stack<T>& rhs)
{
	if (m_arr > rhs.m_arr)
	{
		return false;
	}
	return true;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Stack<T>& rhs)
{
	for (int i = 0; i < rhs.m_arr.size(); ++i)
	{
		os << rhs[i] << " ";
	}
	std::cout << std::endl;
	return os;
}

template <typename T>
void Stack<T>::push(T value)
{
	m_arr.push_back(value);
}

template <typename T>
void Stack<T>::pop()
{
	m_arr.pop_back();
}

template <typename T>
int Stack<T>::size()
{
	return m_arr.size();
}

template <typename T>
bool Stack<T>::empty()
{
	if (m_arr.empty())
	{
		return true;
	}
	return false;
}

template <typename T>
void Stack<T>::swap(Stack<T>& oth)
{
	m_arr.swap(oth.m_arr);
}

template <typename T>
const T& Stack<T>::top(int index) const
{
	if (index < 0 || index >= m_arr.size())
	{
		throw std::out_of_range("Invalid index!!!");
	}
	return m_arr[index];
}

template <typename T>
T& Stack<T>::top(int index)
{
	if (index < 0 || index >= m_arr.size())
	{
		throw std::out_of_range("Invalid index!!!");
	}
	return m_arr[index];
}

template <typename T>
void Stack<T>::print()
{
	for (auto i : m_arr)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}