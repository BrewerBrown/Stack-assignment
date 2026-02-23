#ifndef _STACK_H
#define _STACK_H
#include <iostream>
// Note: `Stack.h` should declare the `Stack` class and constants like `MAX`.
// This driver expects that header to be available in the include path.
using namespace std;

int main() {

	// Create a stack object (initially empty)
	Stack stack;

	// Push two values onto the stack and announce each operation
	stack.Push(1);
	std::cout << "Pushed 1" << std::endl;
	stack.Push(2);
	std::cout << "Pushed 2" << std::endl;

	// Print the contents of the stack (top -> bottom)
	stack.Print();

	// Pop a value into `x` and print the popped value if successful
	int x;
	if (stack.Pop(x)) {
		std::cout << "Popped " << x << std::endl;
	}

	// Print the stack contents again after the pop
	stack.Print();

	return 0;
}

#endif