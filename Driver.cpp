#ifndef _STACK_H
#define _STACK_H
#include <iostream>
using namespace std;

int main() {

	// Initialize stack
	Stack stack;

	// Push two elements
	stack.Push(1);
	stack.Push(2);

	// Print stack elements
	stack.Print();

	// Pop a value into "x"
	int x;
	if (stack.Pop(x)) {
		std::cout << "Popped " << x << std::endl;
	}

	// Print after popping
	stack.Print();

	return 0;
}
