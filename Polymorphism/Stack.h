#pragma once

#include <iostream>

template <class T>
class Stack
{
public:
	Stack(int = 10);
	~Stack() { free(array); }
	void push(T);
	T pop();
private:
	int position;
	int length;
	T* array;

	bool isFull() { return !(position < length); }
	bool isEmpty() { return position == 0; }
};


template <class T>
Stack<T>::Stack(int length)
{
	this->length = length;
	array = new T[length];
	position = 0;
}

template <class T>
void Stack<T>::push(T element)
{
	if(!isFull())
	{
		array[position++] = element;
	}
	else
	{
		cout << "Stack is full" << endl;
	}
}

template <class T>
T Stack<T>::pop()
{
	if (!isEmpty())
	{
		return array[position-- - 1];
	}
	else
	{
		cout << "Stack is empty" << endl;
		return NULL;
	}
}
