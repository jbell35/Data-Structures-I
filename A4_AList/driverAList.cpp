//*****************************************************************************************************
//
//		File:				driverAList.cpp
//
//		Student:				Jamari B.
//
//		Assignment:			Program #4
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-01
//
//		Due:					February 22nd, 2024
//
//
//	   This program uses templated class to insert values into a list, remove values from the list,
//      update values in the list, and retrieve values from the list. It also checks if the list
//      is empty, full, the capacity of the list, the number of values in the list, and can resize
//      the list if necessary.
//	
//		Other files required: 
//			1.	AList.h
//			
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "AList.h"

//*****************************************************************************************************

int main()
{
	 
     AList<short> shortList(3);

     short val1 = 6,
               val2 = 2,
               val3 = 9,
               min,
               dataOut,
               dataOutVal = 6;
    
    shortList.insertFront(val3);
    shortList.insertFront(val2);
    shortList.insertFront(val1);
    
    if (shortList.insertFront(3))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
        cout << endl << "capactiy is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\t smallest value is: " << min << endl << endl;
    }
    else 
    {
        cout << "RESULTS:" << endl 
            << "Unable to insert the value 3" << endl << endl;
    }

    if (shortList.insertBack(4))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl << endl;
    }
    else
    {
        cout << "RESULTS:" << endl 
             << "Unable to insert the value 4" << endl << endl;
    }

    if (shortList.insertAtIndex(5, 1))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\t smallest value is: " << min << endl << endl;
    }
    else
    {
        cout << "RESULTS:" << endl 
             << "Unable to insert the value 5" << endl << endl;
    }

    if (shortList.removeFront(dataOut))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "removed value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULTS:" << endl 
             << "Unable to remove front value" << endl << endl;
    }

   if (shortList.removeBack(dataOut))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "removed value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULTS:" << endl  
             << "Unable to remove back value" << endl << endl;
    }

   if (shortList.removeAtIndex(dataOut, 1))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "removed value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULTS:" << endl 
             << "Unable to remove value from given index" << endl << endl;
    }

    if (shortList.removeAtIndex(dataOut, 5))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "removed value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULTS:" << endl 
             << "Unable to remove value from given index" << endl << endl;
    }

   if (shortList.remove(dataOutVal))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "removed value is: " << dataOutVal << endl << endl;
    }
    else
    {
        cout << "RESULTS:" << endl
             << "Unable to remove value" << endl << endl;
    }

    if (shortList.retrieveFront(dataOut))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "retrieved value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             << "Unable to retrieve front value" << endl << endl;
    }

    if (shortList.retrieveBack(dataOut))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "retrieved value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             << "Unable to retrieve back value" << endl << endl;
    }

    if (shortList.retrieveAtIndex(dataOut, 3))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "retrieved value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to retrieve value at given index" << endl << endl;
    }

    if (shortList.retrieveAtIndex(dataOut, 1))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "retrieved value is: " << dataOut << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to retrieve value at given index" << endl << endl;
    }

    if (shortList.retrieve(dataOutVal))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl
             << "retrieved value is: " << dataOutVal << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to retrieve value" << endl << endl;
    }

    if (shortList.updateFront(1))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to update front value" << endl << endl;
    }

    if (shortList.updateBack(10))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to update back value" << endl;
    }

    if (shortList.updateAtIndex(8, 1))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to update value at given index" << endl << endl;
    }

    if (shortList.updateAtIndex(9, 5))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to update value at given index" << endl << endl;
    }

    if (shortList.update(2))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to update the value to 2" << endl << endl;
    }

    if (shortList.update(7))
    {
        cout << "RESULTS:" << endl;
        shortList.display();
        shortList.getSmallest(min);
         
        cout << endl << "capacity is: " << shortList.getCapacity() << "\t numValues is: " 
             << shortList.getNumValues() << "\tsmallest value is: " << min << endl << endl;
    }
    else
    {
        cout << "RESULTS: " << endl
             <<"Unable to update to update value to 7" << endl << endl;
    }

   if (shortList.isEmpty())
   {
        cout << "The list is empty." << endl << endl;
   }
   else
        cout << "The list is not empty." << endl << endl;

   if (shortList.isFull())
   {
        cout << "The list is full." << endl << endl;
   }
   else
        cout << "The list is not full." << endl << endl;

   if (shortList.clear())
   {
        cout << "The list has been cleared." << endl << endl;

        if (shortList.isEmpty())
        {
            cout << "The list is now empty.";
        }
   }
   
}

//*****************************************************************************************************

/*

Data in List:
[0] 6   [1] 2   [2] 9

shortList.insertFront(3)
RESULTS:
[0] 3   [1] 6   [2] 2   [3] 9 
capactiy is: 6   numValues is: 4         smallest value is: 2

shortList.insertBack(4)
RESULTS:
[0] 3   [1] 6   [2] 2   [3] 9   [4] 4 
capacity is: 6   numValues is: 5        smallest value is: 2

shortList.insertAtIndex(5, 1)
RESULTS:
[0] 3   [1] 5   [2] 6   [3] 2   [4] 9   [5] 4 
capacity is: 6   numValues is: 6         smallest value is: 2

shortList.removeFront(dataOut)
RESULTS:
[0] 5   [1] 6   [2] 2   [3] 9   [4] 4 
capacity is: 6   numValues is: 5        smallest value is: 2
removed value is: 3

shortList.removeBack(dataOut)
RESULTS:
[0] 5   [1] 6   [2] 2   [3] 9 
capacity is: 6   numValues is: 4        smallest value is: 2
removed value is: 4

shortList.removeAtIndex(dataOut, 1)
RESULTS:
[0] 5   [1] 2   [2] 9 
capacity is: 6   numValues is: 3        smallest value is: 2
removed value is: 6

shortList.removeAtIndex(dataOut, 5)
RESULTS:
Unable to remove value from given index

shortList.remove(dataOutVal)
RESULTS:
Unable to remove value

shortList.retrieveFront(dataOut)
RESULTS:
[0] 5   [1] 2   [2] 9 
capacity is: 6   numValues is: 3        smallest value is: 2
retrieved value is: 5

shortList.retrieveBack(dataOut)
RESULTS:
[0] 5   [1] 2   [2] 9 
capacity is: 6   numValues is: 3        smallest value is: 2
retrieved value is: 9

shortList.retrieveAtIndex(dataOut, 3)
RESULTS: 
Unable to retrieve value at given index

shortList.retrieveAtIndex(dataOut, 1)
RESULTS:
[0] 5   [1] 2   [2] 9 
capacity is: 6   numValues is: 3        smallest value is: 2
retrieved value is: 2

shortList.retrieve(dataOutVal)
RESULTS: 
Unable to retrieve value

shortList.updateFront(1)
RESULTS:
[0] 1   [1] 2   [2] 9 
capacity is: 6   numValues is: 3        smallest value is: 1

shortList.updateBack(10)
RESULTS:
[0] 1   [1] 2   [2] 10 
capacity is: 6   numValues is: 3        smallest value is: 1

shortList.updateAtIndex(8, 1)
RESULTS:
[0] 1   [1] 8   [2] 10 
capacity is: 6   numValues is: 3        smallest value is: 1

shortList.updateAtIndex(9, 5)
RESULTS: 
Unable to update value at given index

shortList.update(2)
RESULTS: 
Unable to update the value to 2

shortList.update(7)
RESULTS: 
Unable to update to update value to 7

shortList.isEmpty()
The list is not empty.

shortList.isFull()
The list is not full.

shortList.clear()
The list has been cleared.

The list is now empty.% 

*/