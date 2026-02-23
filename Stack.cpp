#ifndef _STACK_H
#define _STACK_H
#include <iostream>
using namespace std;

Stack::Stack() {
	// Constructor: initialize the top index to -1 to denote an empty stack
	top = -1;
}

bool Stack::IsEmpty() const {
	return top == -1;
}

bool Stack::IsFull() const {
	return top == MAX;
}

bool Stack::Push(int e) {
	if (IsFull()) {
		return false;
	}
	top = top + 1;
	data[top] = e;
	return true;
}

bool Stack::Pop(int& e) {
	if (IsEmpty()) {
		return false;
	}
	e = data[top];
	top = top - 1;
	return true;
}

void Stack::Print() const {
	cout << "Stack (top -> bottom):" << endl;
	if (IsEmpty()) {
		cout << "stack is empty" << endl;
		return;
	}
	for (int i = top; i >= 0; --i) {
		if (i == top) {
            cout << "top: ";
        }
        else {
            cout << " ";
        }
		cout << data[i] << endl;
	}
}

#endif