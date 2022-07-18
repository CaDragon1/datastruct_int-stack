/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: Int Stack
* Purpose: This program is a fix to some bad code involving stacks found online.
*          This is the "stack.cpp" file, which includes "stack.h" and all the necessary functions to implement a stack.
*          The original stack code included the "main" function and all the code in one file. Ew.
**********************/
#include "stack.h"

Stack::Stack() {
    top = -1;
}

Stack::~Stack() {
}

// Push function: Inserts a value onto the stack
bool Stack::push(int x)
{
    bool succeeds = false;
    if (top < SIZE-1)
    { 
        top++;
        stack[top] = x;
        succeeds = true;
    }
    return succeeds;
}

// Pop function: Returns the top value of the stack and effectually removes it from the stack
int Stack::pop()
{
    if (top < 0) {
        throw std::underflow_error("Stack empty");
    }
    return stack[top--];
}

// Peek function: checks the top of the stack
int Stack::peek() {
    if (top < 0) {
        throw std::underflow_error("Stack empty");
    }
    return stack[top];
}

// isEmpty function: checks whether or not the stack is empty
bool Stack::isEmpty()
{
    bool empty = false;
    if (top == -1)
    {
        empty = true;
    }
    return empty;
}
