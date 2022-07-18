/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: Int Stack
* Purpose: This program is a fix to some bad code involving stacks found online.
*          This is the "stack.h" file, which includes headers and prototypes for "stack.cpp".
*          The original code given had no header file.
**********************/
#ifndef STACKS_STACK_H
#define STACKS_STACK_H

#include <stdexcept>

// Default size of the stack: 10
#define SIZE 10

class Stack {

public:
	// Constructors
	Stack();

	// Destructor
	~Stack();

	//Stack functions
	bool push(int);
	int pop();
	int peek();
	bool isEmpty();


protected:
	// The attributes of the stack
	int top;
	int stack[SIZE];

};

#endif // STACKS_STACK_H