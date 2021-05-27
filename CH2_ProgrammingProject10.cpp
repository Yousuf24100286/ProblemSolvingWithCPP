/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 10

Modify your program from Programming Project 9 so that it outputs the sum of all positive numbers,
the average of all positive numbers,
the sum of all non-positive numbers,
the average of all non-positive numbers,
the sum of all positive and non-positive numbers,
and the average of all numbers entered.

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
    double  Pcount = 0 , Ncount = 0 ;

    //statements
    cout << endl ;
	for(int i = 0 ; i < 10 ; i++)
    {
        cout << " Enter A Whole Number: " ;
        cin >> num ;
        if(num >= 0)
        {
            Pnum = Pnum + num ;
            Pcount++ ;
        }
        else
        {
            Nnum = Nnum + num ;
            Ncount++ ;
        }
    }

    cout << "\n The Sum Of Positive Numbers: " << Pnum ;
    cout << "\n The Average Of Positive Numbers: " << Pnum/Pcount ;
    cout << "\n The Sum Of Negative Numbers: " << Nnum ;
    cout << "\n The Average Of Negative Numbers: " << Nnum/Ncount ;
    cout << "\n The Sum Of All Numbers: " << Pnum + Nnum ;
    cout << "\n The Average Of All Numbers: " << (Pnum+Nnum)/10.0 << endl ;

    //Program Ends Here
	return 0;
}
