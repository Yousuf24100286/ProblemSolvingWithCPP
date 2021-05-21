/**

Problem Solving With C++
Chapter 1 / Introduction to Computer and C++ Programming
Practice Program 3

Modify the C++ program that you entered in Practice Program 1.
Change the multiplication sign * in your C++ program to an addition sign +.
Recompile and run the changed program.
Notice that the program compiles and runs perfectly fine, but the output is incorrect. That is because this modification is a logic error.

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
    cout << "The product of the two numbers is " << num1 + num2 << endl << endl ;

    cout << "Good-Bye\n" ;  // Good-Bye Statement

    //Program ends here
    return 0 ;
}

/**

RESULT

Logical Error
Rather than product we receive the sum

**/
