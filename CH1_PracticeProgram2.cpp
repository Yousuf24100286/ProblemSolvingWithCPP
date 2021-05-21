/**

Problem Solving With C++
Chapter 1 / Introduction to Computer and C++ Programming
Practice Program 2

Modify the C++ program you entered in Practice Program 1.
Change the program so that it first writes the word Hello to the screen and then goes on to do the same things.
Add one more line that will make the program write the word Good-bye to the screen at the end of the program.

**/


/* Include Directives */
#include<iostream>

/* Using Statndard Methods */
using namespace std ;

int main() //Main Function
{
    int num1 , num2 ;   //Variable Declaration
    /* Statements */
    cout << "Hello" << endl ; // Hello Statement
    cout << "Enter The First Number: " ;
    cin >> num1 ;
    cout << "Enter The Second Number: " ;
    cin >> num2 ;
    cout << endl ;
    //Output Prints
    cout << "The sum of the two numbers is " << num1 + num2 << endl ;
    cout << "The product of the two numbers is " << num1 * num2 << endl << endl ;

    cout << "Good-Bye\n" ;  // Good-Bye Statement

    //Program ends here
    return 0 ;
}
