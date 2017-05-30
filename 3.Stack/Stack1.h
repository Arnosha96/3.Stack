#pragma once
#include <iostream>
using namespace std;

template <class T>
class Stack1
{
private:
	T *arr;
	int Max;
	int index;

public:
	
	Stack1();
	Stack1(int number)
	{
		Max = 1000;
		index = 0;
		if (number<=Max)
		{
			arr = new T[number];
			Max = number;
		}
	
	}

	Stack1(const Stack1 &elem)
	{
		Max = elem.Max;
		index = elem.index;
		arr = new T[index];

	    for (int i(0); i < index; i++)  arr[i] = elem.arr[i];

	}

	~Stack1()
	{
		delete[]arr;
	}
    bool Push(T n)
	{
		if (index == Max)
		{
			throw  "Переполнение стека"; return false;
		}
		else
		{
			arr[index] = n;
			index++;
			return true;
		}
	 }
	T Pop()
	{
		if (index <=0) return 0;
		else return arr[--index];

	}

	bool IsEmpty()
	{
		if (index <=0) return true;
		else return false;
	}

	bool IsFull()
	{
		if (index == Max) return true;
		else return false;
	}

	int HowMany ()
	{
		return index;
	}
};

