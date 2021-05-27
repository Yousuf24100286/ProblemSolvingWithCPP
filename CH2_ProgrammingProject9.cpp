/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 9

Write a program that reads in ten whole numbers and that outputs the sum of all the numbers greater than zero,
the sum of all the numbers less than zero (which will be a negative number or zero),
and the sum of all the numbers, whether positive, negative, or zero.
The user enters the ten numbers just once each and the user can enter them in any order.
Your program should not ask the user to enter the positive numbers and the negative numbers separately.
**/


//include directives
#include<iostream>

//using standard name space
using namespace std;


//main function
int main()
{
    //Variable declaration
    int Pnum = 0 , Nnum = 0 , num ;
	char repeat;

    //statements
    cout << endl ;
	for(int i = 0 ; i < 10 ; i++)
    {
        cout << " Enter A Whole Number: " ;
        cin >> num ;
        if(num >= 0)
            Pnum = Pnum + num ;
        else
            Nnum = Nnum + num ;
    }

    cout << "\n The Sum Of Positive Numbers: " << Pnum ;
    cout << "\n The Sum Of Negative Numbers: " << Nnum << endl ;

    //Program Ends Here
	return 0;
}
