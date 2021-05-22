/**

Problem Solving With C++
Chapter 1 / Introduction to Computer and C++ Programming
Programming Project 4

Write a program that allows the user to enter a time in seconds and
then outputs how far an object would drop if it is in freefall for that length of time.
Assume that the object starts at rest, there is no friction or resistance from air,
and there is a constant acceleration of 32 feet per second due to gravity.
Use the equation:

**/



//include directives
#include<iostream>

//using standard methods
using namespace std ;


//main function
int main()
{
    //variable declaration
    int const acceleration = 32 ;
    double time ;

    //statements
    cout << "\n Enter The Time In Seconds: " ;
    cin >> time ;
    cout << endl ;
    cout << " The Distance Covered In FreeFall: " << (acceleration*time*time)/2 << " Feets\n" ;


    //Program ends here
    return 0 ;
}
