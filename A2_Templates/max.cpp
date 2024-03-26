//*****************************************************************************************************
//
//		File:					max.cpp
//
//		Student:				Jamari B. 
//
//		Assignment:				Program #2
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-01
//
//		Due:					February 5th, 2024
//
//
//		This program uses templates to create 3 seperate functions that will take input from 
//      ints, doubles, and chars. It also uses overloaded functions to handle c-strings.
//	
//		Other files required: 
//			1.	None
//			
//*****************************************************************************************************

#include <iostream>
#include <typeinfo>
#include <cstring>
using namespace std;

//*****************************************************************************************************

template <typename TYPE>
void getData (TYPE & val1, TYPE & val2);

void getData(char text1[], char text2[]);

template <typename TYPE>
TYPE findMax(TYPE val1, TYPE val2);
char * findMax(char text1[], char text2[]);

template <typename TYPE>
void displayMax(TYPE val1, TYPE val2, TYPE maxVal);

//*****************************************************************************************************

int main()
{
    int aInt, 
        bInt,
        size = 50,
        maxInt;

    double aDouble,
           bDouble,
           maxDouble;
    
    char aChar,
         bChar,
         maxChar;
    
    char aArray[size],
         bArray[size];
    char * maxArray;

    getData(aInt, bInt);
    getData(aDouble, bDouble);
    getData(aChar, bChar);
    getData(aArray, bArray);

    maxInt = findMax(aInt, bInt);
    maxDouble = findMax(aDouble, bDouble);
    maxChar = findMax(aChar, bChar);
    maxArray = findMax(aArray, bArray);

    displayMax(aInt, bInt, maxInt);
    displayMax(aDouble, bDouble, maxDouble);
    displayMax(aChar, bChar, maxChar);
    displayMax(aArray, bArray, maxArray);
    
    return 0;
}

//*****************************************************************************************************

template <typename TYPE>
void getData (TYPE & val1, TYPE & val2)
{
    cout << "Enter the first " << typeid(val1).name() << ": \t";
    cin >> val1;  

    cout << "Enter the second " << typeid(val2).name() << ": \t";
    cin >> val2; 

    cout << endl;
}

//*****************************************************************************************************

void getData(char text1[], char text2[])
{
    int size = 50;
    
    cout << "Enter the first c-string: \t";
    cin.ignore();
    cin.getline(text1, size);


    cout << "Enter the second c-string: \t";
    cin.getline(text2, size);

    cout << endl;

}

//*****************************************************************************************************

template <typename TYPE>
TYPE findMax(TYPE val1, TYPE val2)
{
    TYPE max = val1; 

    if (max < val2)
    {
        max = val2;
    }

    return max; 

}

//*****************************************************************************************************

char * findMax(char text1[], char text2[])
{
    char * max = text1;

    if (strcmp(text1, text2) < 0)
    {
        max = text2;
        
    }

    return max;

}

//*****************************************************************************************************

template <typename TYPE>
void displayMax(TYPE val1, TYPE val2, TYPE maxVal)
{
    cout << "Result for " << typeid(TYPE).name() << ": " << endl
         << "The first value was: \t" << val1 << endl 
         << "The second value was: \t" << val2 << endl 
         << "The maximum value is: \t" << maxVal << endl << endl;
}

//*****************************************************************************************************

/*

Enter the first int:      75
Enter the second int:     6

Enter the first double:   86.5
Enter the second double:  123.4

Enter the first char:      z
Enter the second char:     a

Enter the first c-string:    apple pie
Enter the second c-string:   apple dumpling

Result for int: 
The first value was:    75
The second value was:   6
The maximum value is:   75

Result for double: 
The first value was:    86.5
The second value was:   123.4
The maximum value is:   123.4

Result for char: 
The first value was:    z
The second value was:   a
The maximum value is:   z

Result for char *: 
The first value was:    apple pie
The second value was:   apple dumpling
The maximum value is:   apple pie

*/