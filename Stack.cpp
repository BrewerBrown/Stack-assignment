#ifndef _STACK_H
#define _STACK_H
#include <iostream>
using namespace std;

// Constructor
Stack::Stack() {
    top = -1;
}

// Check if stack contains any elements
bool Stack::IsEmpty() const {
    return top == -1;
}

// Check if stack is full
bool Stack::IsFull() const {
    return top == MAX - 1;
}

// Push an element onto the stack
bool Stack::Push(int e) {
    if (IsFull()) {
        return false;
    }
    // Increment
    top = top + 1;
    data[top] = e;
    return true;
}

// Pop top element into "e"
bool Stack::Pop(int e) {
    if (IsEmpty()) {
        return false;
    }
    e = data[top];
    top = top - 1;
    return true;
}

// Print stack's elements
void Stack::Print() const {
    cout << "Stack contents: " << endl;
    if (IsEmpty()) {
        cout << "stack is empty" << endl;
        return;
    }
    for (int i = top; i >= 0; --i) {
        if (i == top) {
            cout << "top element: ";
        }
        else {
            cout << " ";
        }
        cout << data[i] << endl;
    }
}
