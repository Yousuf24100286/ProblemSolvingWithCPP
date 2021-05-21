/**

Problem Solving With C++
Chapter 1 / Introduction to Computer and C++ Programming
Practice Program 1

Write a C++ program that reads in two integers and then outputs both their sum and their product.

**/


/* Include Directives */
#include<iostream>

/* Using Statndard Methods */
using namespace std ;

int main() //Main Function
{
    int num1 , num2 ;   //Variable Declaration
    /* Statements */
    cout << "Enter The First Number: " ;
    cin >> num1 ;
    cout << "Enter The Second Number: " ;
    cin >> num2 ;
    system("cls") ; //Clear Screen

    //Output Prints
    cout << "The sum of the two numbers is " << num1 + num2 << endl ;
    cout << "The product of the two numbers is " << num1 * num2 << endl ;

    //Program ends here
    return 0 ;
}
