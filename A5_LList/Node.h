//*****************************************************************************************************
//
//		File:					Node.h
//
//		Student:				Jamari B.
//
//		Assignment:				Program #5
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-01
//
//		Due:					February 29th, 2024
//
//
//		This program uses nodes that connect together to form a linked list. By utilizing a self-
//      referential structure within the LList class, this program tests the ability to insert,
//      retrieve, remove, view the front, view the back, the total number, display all nodes, and 
//      check to see if the list is full or empty.   
//	
//		Other files required: 
//			1.	LList.h
//          2.  LDriver.cpp
//			
//*****************************************************************************************************

#ifndef NODE_H
#define NODE_H

//*****************************************************************************************************

template <typename TYPE>
struct Node
{
    TYPE data;
    Node<TYPE> * next; 

    Node();
    Node(const TYPE & d, Node<TYPE> * n = nullptr);
};

//*****************************************************************************************************

template <typename TYPE>
Node<TYPE>:: Node()
{
    data = 0;
    next = nullptr;
}

//*****************************************************************************************************

template <typename TYPE>
Node<TYPE>:: Node(const TYPE & d, Node<TYPE> * n)
{
    data = d;
    next = n;
}

//*****************************************************************************************************

#endif