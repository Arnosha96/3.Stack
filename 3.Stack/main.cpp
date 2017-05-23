#include <iostream>
#include <conio.h>
#include "Stack1.h"

using namespace std;
 
int main()
{
	setlocale(LC_ALL,"Russian");
	
	Stack1 <int> st(5);
	try
	{

		st.Push(2);
		st.Push(12);
		st.Push(26);
		st.Push(32);
		st.Push(1);
		st.Push(3545);
	}
	
	catch (const char*message)
	{
		cout << "Error:" << message << endl;
	}
		cout << endl;

		Stack1 <int> st2(st);

		cout << st2.Pop() << endl;
		cout << st2.Pop() << endl;
		cout << st2.Pop() << endl;
		cout << st2.Pop() << endl;
		cout << st2.Pop() << endl;
	
	return 0;
}
