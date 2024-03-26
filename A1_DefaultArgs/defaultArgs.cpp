//*****************************************************************************************************
//
//		File:					defaultArgs.cpp
//
//		Student:				Jamari B. 
//
//		Assignment:				Program #1
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-01
//
//		Due:					January 29th, 2024
//
//
//		This program uses default arguments to load predetermined values if input is not given.
//	
//		Other files required: 
//			1.	None
//			
//*****************************************************************************************************

#include <iostream>
using namespace std;

void displayMsg(const char text[50] = "Decide. Commit. Succeed.", char symbol = ' ', int num = 10);

//*****************************************************************************************************

int main()
{

    displayMsg("I will decide.", '*', 15);
    displayMsg("I will commit.", '+');
    displayMsg("I will succeed.");
    displayMsg();

}

//*****************************************************************************************************

void displayMsg(const char text[], char symbol, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << symbol;
    }

    cout << text;

    for (int i = 0; i < num; i++)
    {
        cout << symbol;
    }

    cout << endl;
}

//*****************************************************************************************************

/*

***************I will decide.***************
++++++++++I will commit.++++++++++
          I will succeed.          
          Decide. Commit. Succeed. 

*/