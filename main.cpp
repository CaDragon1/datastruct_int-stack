/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: Int Stack
* Purpose: This program is a fix to some bad code involving stacks found online.
*          This is the "main.cpp" file, which creates a stack and runs the code to test it.
**********************/
#include "main.h"


int main(int argc, char** argv) {
	
    Stack stack1;
   
    // Standard stack testing (not trying to break it yet) to make sure things are working okay
    std::cout << "Pushing to stack" << std::endl;
    std::cout << stack1.push(123) << std::endl;

    try {
        std::cout << "Peeking and popping to stack" << std::endl;
        std::cout << stack1.peek() << std::endl;
        std::cout << stack1.pop() << std::endl;
    }
    catch (const std::underflow_error& e) {
        std::cout << "exception: " << e.what() << std::endl;
    }
    
    std::cout << stack1.isEmpty() << std::endl;
    std::cout << std::endl;


    // Testing mass pushing to stack1
    std::cout << "\nTesting stack pushing" << std::endl;
    for (int i = 0; i < SIZE * 2.5; i++) {
        std::cout << stack1.push(i) << std::endl;
        std::cout << stack1.peek() << std::endl;
        std::cout << "i = " << i << std::endl;
    }

    // Testing mass popping to stack1
    std::cout << "\nTesting stack popping" << std::endl;
    for (int i = 0; i < SIZE * 2.5; i++) {
        try {
            std::cout << stack1.pop() << std::endl;
        }
        catch (const std::underflow_error& e) {
            std::cout << "exception: " << e.what() << std::endl;
        }
        std::cout << stack1.isEmpty() << std::endl;
    }
    std::cout << std::endl;

    // Testing peek function in stack1
    // check while empty, check while full, check while stack1 has items in it
    std::cout << "\nTesting stack peeking" << std::endl;
    for (int i = 0; i < SIZE * 2.5; i++) {
        try {
            std::cout << "push - " << stack1.push(40 + i) << std::endl;
            std::cout << "peek - " << stack1.peek() << std::endl;
        }
        catch (const std::underflow_error& e) {
            std::cout << "exception: " << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < SIZE * 2.5; i++) {
        try {
            std::cout << "pop - " << stack1.pop() << std::endl;
            std::cout << "peek - " << stack1.peek() << std::endl;
        }
        catch (const std::underflow_error& e) {
            std::cout << "exception: " << e.what() << std::endl;
        }
    }
    std::cout << std::endl;

    // Testing not-quite-random-but-very-spastic peeking, popping, and pushing using a for loop and conditional statements
    for (int i = 0; i < SIZE * 25; i++) {
        if (i % 3 == 0) {
            std::cout << "Pushing: " << stack1.push(i) << std::endl;
            try {
                std::cout << "         " << stack1.peek() << std::endl;
            }
            catch (const std::underflow_error& e) {
                std::cout << "exception: " << e.what() << std::endl;
            }
        }
        if (i % 4 == 0) {
            try {
                std::cout << "Popping: " << stack1.pop() << std::endl;
            }
            catch (const std::underflow_error& e) {
                std::cout << "exception: " << e.what() << std::endl;
            }
        }
        if (i % 7 == 0) {
            try {
                std::cout << "Popping: " << stack1.pop() << std::endl;
            }
            catch (const std::underflow_error& e) {
                std::cout << "exception: " << e.what() << std::endl;
            }
        }
        if (i % 8 == 0) {
            std::cout << "Pushing: " << stack1.push(i) << std::endl;
            try {
                std::cout << "         " << stack1.peek() << std::endl;
            }
            catch (const std::underflow_error& e) {
                std::cout << "exception: " << e.what() << std::endl;
            }
        }
        if (i % 10 == 0) {
            try {
                std::cout << "Peeking: " << stack1.peek() << std::endl;
            }
            catch (const std::underflow_error& e) {
                std::cout << "exception: " << e.what() << std::endl;
            }
        }
        if (i % 13 == 0) {
            try {
                std::cout << "Popping: " << stack1.pop() << std::endl;
            }
            catch (const std::underflow_error& e) {
                std::cout << "exception: " << e.what() << std::endl;
            }
        }
    }
    

	return 0;
}

