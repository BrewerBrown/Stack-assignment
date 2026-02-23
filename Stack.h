#ifndef _STACK_H
#define _STACK_H
#include <iostream>
using namespace std;
const int MAX = 10;
class Stack {
	int data[MAX];
	int top;
public:
	Stack(); //initialize top to indicate an empty stack
	bool Push(int e); // update top and insert e to the top of the stack
					  // return true if successful, false if unsuccessful
	bool Pop(int& e); // store top into reference parameter and update top
					  // return true if successful, false if unsuccessful
	bool IsEmpty()const; //return true if stack is empty, false if not empty
	bool IsFull()const; //return true if stack is full, false if not.
	void Print()const; // print stack from top to bottom with one item per line
					   // and labeling the top

};


#endif

