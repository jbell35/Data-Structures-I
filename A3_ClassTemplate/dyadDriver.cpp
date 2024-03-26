//*****************************************************************************************************
//
//		File:				dyadDriver.cpp
//
//		Student:				Jamari B. 
//
//		Assignment:			Program #3
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-01
//
//		Due:					February 12th, 2024
//
//
//		This program uses a header file and a class to recieve input, dispaly the original values, 
//        swap the values, and then show the swap results.  
//	
//		Other files required: 
//			1.	dyad.h
//			
//*****************************************************************************************************

#include <iostream>
#include <cstring>
using namespace std;
#include "dyad.h"

//*****************************************************************************************************

int main()
{
    int iFirst,
        iSecond;

    double dFirst, 
           dSecond; 
    
    char cFirst,
         cSecond; 

    Dyad<int> iVals(10, 5);
    Dyad<double> dVals(27.8, 97.1);
    Dyad<char> cVals('b', 'j');

    cout << "First int: " << iVals.getFirst() << endl
         << "Second int: " << iVals.getSecond() << endl << endl;
    
    iVals.swapValues();
    iVals.get2Values(iFirst, iSecond);

    cout << "Swap Results:" << endl
         << "First int after swap: " << iFirst  << endl
         << "Second int after swap: " << iSecond << endl << endl;
     
     cout << "First double: " << dVals.getFirst() << endl
         << "Second double: " << dVals.getSecond() << endl << endl;
    
    dVals.swapValues();
    dVals.get2Values(dFirst, dSecond);

    cout << "Swap Results:" << endl
         << "First double after swap: " << dFirst  << endl
         << "Second double after swap: " << dSecond << endl << endl;  
     
     cout << "First char: " << cVals.getFirst() << endl
         << "Second char: " << cVals.getSecond() << endl << endl;
    
    cVals.swapValues();
    cVals.get2Values(cFirst, cSecond);

    cout << "Swap Results:" << endl
         << "First char after swap: " << cFirst  << endl
         << "Second char after swap: " << cSecond << endl << endl;


    return 0; 
}

//*****************************************************************************************************

/*

First int: 10
Second int: 5

Swap Results:
First int after swap: 5
Second int after swap: 10

First double: 27.8
Second double: 97.1

Swap Results:
First double after swap: 97.1
Second double after swap: 27.8

First char: b
Second char: j

Swap Results:
First char after swap: j
Second char after swap: b

*/