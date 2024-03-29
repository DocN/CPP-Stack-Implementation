// Stack.cpp : Defines the entry point for the console application.
//
#include "stack.hpp"
#include <iostream>

using namespace std;
int main()
{
	Stack * test = new Stack();
	cout << "empty status " << test->empty() << endl;
	cout << test->top() << endl;
	test->push(1);
	test->push(2);
	test->push(3);
	test->push(4);
	test->push(5);
	test->push(6);
	test->push(7);
	test->push(8);
	test->push(9);
	test->push(10);
	test->push(11);
	test->push(12);

	cout << "full status " << test->full() << endl;
	test->print();

	cout << test->pop() << endl;
	cout << test->top() << endl;
	cout << test->pop() << endl;
	cout << test->pop() << endl;
	cout << test->top() << endl;
	cout << test->push(10) << endl;
	test->print();

	cout << "testing overload " << endl;
	cout << *test;
	Stack newStack = *test;
	cout << "new stack " << endl;
	newStack.print();
	system("PAUSE");
    return 0;
}

