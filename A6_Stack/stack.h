//*****************************************************************************************************
//
//		File:					stack.h
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
//			1.	stackDriver.cpp
//			
//*****************************************************************************************************

#ifndef STACK_H
#define STACK_H

//*****************************************************************************************************

template <typename TYPE>
class Stack
{
    private: 
        TYPE * stack;
        int capacity;
        int top; 
    
    public:
        Stack(int cap = 80);
        ~Stack();
        bool push(const TYPE & dataIn);
        bool pop(TYPE & dataOut);
        bool peek(TYPE & dataOut) const;
        int getNumValues() const;
        bool isFull() const; 
        bool isEmpty() const;
};

//*****************************************************************************************************

template <typename TYPE>
Stack<TYPE>:: Stack(int cap)
{
    capacity = cap;
    stack = new TYPE[capacity];
    top = -1;
}

//*****************************************************************************************************

template <typename TYPE>
Stack<TYPE>:: ~Stack()
{
    delete [] stack;
    capacity = 0;
    top = -1;
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE>:: push(const TYPE & dataIn)
{
    bool success = false; 

    if ((top + 1) < capacity)
    {
        top++;
        stack[top] = dataIn;
        success = true;
    }

    return success; 
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE>:: pop(TYPE & dataOut)
{
    bool success = false; 

    if (top > -1)
    {
        dataOut = stack[top];
        top--; 
        success = true;
    }

    return success; 
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE>:: peek(TYPE & dataOut) const
{
    bool success = false; 

    if (top > -1)
    {
        dataOut = stack[top];
        success = true; 
    }

    return success;
}

//*****************************************************************************************************

template <typename TYPE>
int Stack<TYPE>:: getNumValues() const
{
    return (top + 1);
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE>:: isFull() const
{
    return ((top + 1) == capacity);
}

//*****************************************************************************************************

template <typename TYPE>
bool Stack<TYPE>:: isEmpty() const
{
    return (top == -1);
}

//*****************************************************************************************************

#endif