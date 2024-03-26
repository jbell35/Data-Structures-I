//*****************************************************************************************************
//
//		File:					LDriver.cpp
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
//			1.	Node.h
//          2.  LList.h
//			
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "LList.h"

//*****************************************************************************************************

int main()
{
    LList<int> iLList; 

    int num1 = 25,
        num2 = 3,
        num3 = 10,
        num4 = 52,
        num5 = 1,
        dataOut;
   
    if (iLList.isEmpty())
    {
        cout << "RESULT:" << endl
             << "List is currently empty." << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl
             << "List is not empty." << endl << endl;
    }

    if (iLList.insert(25))
    {
        cout << "RESULT:" << endl;
        iLList.display();
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl 
             << "Unable to insert node containing value 25" << endl << endl;
    }

    if (iLList.insert(3))
    {
        cout << "RESULT:" << endl;
        iLList.display();
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl 
             << "Unable to insert node containing value 3" << endl << endl;
    }    

   if (iLList.insert(10))
   {
        cout << "RESULT:" << endl;
        iLList.display();
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl 
             << "Unable to insert node containing value 3" << endl << endl;
    } 

   if (iLList.insert(52))
   {
        cout << "RESULT: " << endl;
        iLList.display(); 
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
   }
   else
   {
        cout << "RESULT:" << endl 
             << "Unable to insert node containing value 3" << endl << endl;
   }

   if (iLList.remove(num3))
   {
        cout << "RESULT: " << endl;
        iLList.display();
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
   }
   else
   {
        cout << "RESULT:" << endl
             << "Unable to remove node containing " << num3 << endl << endl;
   }

   if (iLList.remove(num3))
   {
        cout << "RESULT: " << endl;
        iLList.display();
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
   }
   else
   {
        cout << "RESULT:" << endl
             << "Unable to remove node containing " << num3 << endl << endl;
   }

    if (iLList.remove(num2))
   {
        cout << "RESULT: " << endl;
        iLList.display();
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
   }
   else
   {
        cout << "RESULT:" << endl
             << "Unable to remove node containing " << num2 << endl << endl;
   }

   if (iLList.insert(3))
   {
        cout << "RESULT:" << endl;
        iLList.display();
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl 
             << "Unable to insert node containing value 3" << endl << endl;
    }

   if (iLList.insert(10))
   {
        cout << "RESULT:" << endl;
        iLList.display();
        cout << endl << "Total Nodes: " << iLList.getNumValues() << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl 
             << "Unable to insert node containing value 3" << endl << endl;
    } 

    if(iLList.retrieve(num3))
    {
        cout << "RESULT:" << endl
             << "Success! value " << num3 << " has been retrieved. "<< endl << endl;
    }
    else
    {
        cout << "RESULT:" <<endl 
             << "Unable to retrieve value." << endl << endl;
    }

    if(iLList.retrieve(num5))
    {
        cout << "RESULT:" << endl
             << "Success! value " << num5 << " has been retrieved. "<< endl << endl;
    }
    else
    {
        cout << "RESULT:" <<endl 
             << "Unable to retrieve value from list." << endl << endl;
    }

    if(iLList.viewFront(dataOut))
    {
        cout << "RESULT:" << endl  
             << "The front node value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl
             << "Unable to view front node value" << endl << endl;
    }

    if(iLList.viewRear(dataOut))
    {
        cout << "RESULT:" << endl  
             << "The rear node value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl
             << "Unable to view rear node value" << endl << endl;
    }

    if (iLList.isEmpty())
    {
        cout << "RESULT:" << endl
             << "List is currently empty." << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl
             << "List is not empty." << endl << endl;
    }

    if (iLList.isFull())
    {
        cout << "RESULT:" << endl
             << "List is full, unable to add more nodes." << endl << endl;
    }
    else
    {
        cout << "RESULT:" << endl
             << "List is not full, can add more nodes." << endl << endl;       
    }

}

//*****************************************************************************************************

/*

iLList.isEmpty()
==============================
RESULT:
List is currently empty.

iLList.insert(25)
==============================
RESULTS:
25
Total Nodes: 1

iLList.insert(3)
==============================
RESULTS:
3       25
Total Nodes: 2

iLList.insert(10)
==============================
RESULTS:
3       10      25
Total Nodes: 3

iLList.insert(52)
==============================
RESULTS:
3       10      25      52
Total Nodes: 4

iLList.remove(10)
==============================
RESULT: 
3       25      52
Total Nodes: 3

iLList.remove(10)
==============================
RESULT:
Unable to remove node containing 10

iLList.remove(3)
==============================
RESULT: 
25      52
Total Nodes: 2

iLList.insert(3)
==============================
RESULT:
3       25      52
Total Nodes: 3

iLList.insert(52)
==============================
RESULT:
3       10      25      52
Total Nodes: 4

iLList.retrieve(10)
==============================
RESULT:
Success! value 10 has been retrieved. 

iLList.retrieve(1)
==============================
RESULT:
Unable to retrieve value from list.

iLList.viewFront(dataOut)
==============================
RESULT:
The front node value is: 3

iLList.viewRear(dataOut)
==============================
RESULT:
The rear node value is: 52

iLList.isEmpty()
==============================
RESULT:
List is not empty.

iLList.isFull()
==============================
RESULT:
List is not full, can add more nodes.

*/