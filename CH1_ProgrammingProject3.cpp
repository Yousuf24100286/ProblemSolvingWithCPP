/**

Problem Solving With C++
Chapter 1 / Introduction to Computer and C++ Programming
Programming Project 3

Write a program that allows the user to enter a number of quarters, dimes,
and nickels and then outputs the monetary value of the coins in cents. For
example, if the user enters 2 for the number of quarters, 3 for the number
of dimes, and 1 for the number of nickels, then the program should output
that the coins are worth 85 cents

**/



//include directives
#include<iostream>

//using standard methods
using namespace std ;


//main function
int main()
{
    //variable declaration
    int quarter, dimes , nickel ;

    //statements
    cout << "\n Enter The Number of Quarter: " ;
    cin >> quarter ;
    cout << " Enter The Number of Dimes: " ;
    cin >> dimes ;
    cout << " Enter The Number of Nickels: " ;
    cin >> nickel ;
    cout << endl << endl ;
    cout << " The Given Coins Worth " << 25*quarter + 10*dimes + 5*nickel << " cents\n" ;


    //Program ends here
    return 0 ;
}
