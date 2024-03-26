//*****************************************************************************************************
//
//		File:					stackDriver.cpp
//
//		Student:				Jamari Bell
//
//		Assignment:				Program #6
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-01
//
//		Due:					March 21st
//
//
//		This program creates a stack data structure that inserts (push), removes (pop), and views
//      (peek) only the first value in the stack. It operates on a last in first out basis. The 
//      program also checks to see if the stack is empty, full, and how many values are in the
//      stack.
//	
//		Other files required: 
//			1.	stack.h
//			
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "stack.h"

//*****************************************************************************************************

int main()
{
	 Stack<int> stackList(5);

     int v1 = 5,
         v2 = 89,
         v3 = 20,
         v4 = 1,
         v5 = 8,
         v6 = 70,
         dataOut;
    
    if (stackList.isEmpty())
    {
        cout << "Stack is empty" << endl << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl << endl;
    }
    
    stackList.push(v5);
    stackList.push(v4);
    stackList.push(v3);
    stackList.push(v2);
    stackList.push(v1);

    if (stackList.isFull())
    {
        cout << "Stack is full" << endl << endl;
    }
    else
    {
        cout << "The stack is not full." << endl << endl;
    }

    if(stackList.peek(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value available is: " << dataOut << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }

    if (stackList.pop(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value removed is: " << dataOut << endl
             << "Total left in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to remove value from the stack." << endl << endl;
    }

    if(stackList.peek(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value available is now: " << dataOut << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Stack is empty." << endl << endl;
    }

    if (stackList.push(v6))
    {
        cout << "RESULTS: " << endl
             << "Inserted the value: 70" << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to add value." << endl << endl;
    }
    
    if(stackList.peek(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value available is now: " << dataOut << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Stack is empty." << endl << endl;
    }

    if (stackList.pop(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value removed is: " << dataOut << endl
             << "Total left in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to remove value from the stack." << endl << endl;
    }

    if(stackList.peek(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value available is now: " << dataOut << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Stack is empty." << endl << endl;
    }

    if (stackList.pop(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value removed is: " << dataOut << endl
             << "Total left in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to remove value from the stack." << endl << endl;
    }

    if(stackList.peek(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value available is now: " << dataOut << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Stack is empty." << endl << endl;
    }

    if (stackList.pop(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value removed is: " << dataOut << endl
             << "Total left in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to remove value from the stack." << endl << endl;
    }

    if(stackList.peek(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value available is now: " << dataOut << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Stack is empty." << endl << endl;
    }

    if (stackList.pop(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value removed is: " << dataOut << endl
             << "Total left in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to remove value from the stack." << endl << endl;
    }

    if(stackList.peek(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value available is now: " << dataOut << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Stack is empty." << endl << endl;
    }

    if (stackList.pop(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value removed is: " << dataOut << endl
             << "Total left in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to remove value from the stack." << endl << endl;
    }

    if (stackList.pop(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value removed is: " << dataOut << endl
             << "Total left in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to remove value from the stack." << endl << endl;
    }

    if(stackList.peek(dataOut))
    {
        cout << "RESULTS: " << endl
             << "The value available is now: " << dataOut << endl
             << "Total in stack: " << stackList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "Unable to peek because stack is empty." << endl << endl;
    }

    if (stackList.isEmpty())
    {
        cout << "Stack is empty." << endl << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl << endl;
    }

    return 0;

}

//*****************************************************************************************************

/*

stackList.isEmpty()
Stack is empty

stackList.push : 5 89 20 1 8

stackList.isFull()
Stack is full

stackList.peek(dataOut)
RESULTS: 
The value available is: 5
Total in stack: 5

stackList.pop(dataOut)
RESULTS: 
The value removed is: 5
Total left in stack: 4

stackList.peek(dataOut)
RESULTS: 
The value available is now: 89
Total in stack: 4

stackList.push(70)
RESULTS: 
Inserted the value: 70
Total in stack: 5

stackList.peek(dataOut)
RESULTS: 
The value available is now: 70
Total in stack: 5

stackList.pop(dataOut)
RESULTS: 
The value removed is: 70
Total left in stack: 4

stackList.peek(dataOut)
RESULTS: 
The value available is now: 89
Total in stack: 4

stackList.pop(dataOut)
RESULTS: 
The value removed is: 89
Total left in stack: 3

stackList.peek(dataOut)
RESULTS: 
The value available is now: 20
Total in stack: 3

stackList.pop(dataOut)
RESULTS: 
The value removed is: 20
Total left in stack: 2

stackList.peek(dataOut)
RESULTS: 
The value available is now: 1
Total in stack: 2

stackList.pop(dataOut)
RESULTS: 
The value removed is: 1
Total left in stack: 1

stackList.peek(dataOut)
RESULTS: 
The value available is now: 8
Total in stack: 1

stackList.pop(dataOut)
RESULTS: 
The value removed is: 8
Total left in stack: 0

stackList.pop(dataOut)
RESULTS: 
Unable to remove value from the stack.

stackList.peek(dataOut)
Unable to peek because stack is empty.

stackList.isEmpty()
Stack is empty.

*/