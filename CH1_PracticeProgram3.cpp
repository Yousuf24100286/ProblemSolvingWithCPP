/**

Problem Solving With C++
Chapter 1 / Introduction to Computer and C++ Programming
Practice Program 3

Further modify the C++ program that you already modified in Practice Program 2.
Change the multiplication sign * in your C++ program to a division sign /.
Recompile the changed program.
Run the program.
Enter a 0 input for second number.
Notice the run-time error message due to division by zero.

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
    cout << "The product of the two numbers is " << num1 / num2 << endl << endl ;

    cout << "Good-Bye\n" ;  // Good-Bye Statement

    //Program ends here
    return 0 ;
}

/**

RESULT

Program Crashed
Run Time Error
Process Returned With The Value of 255

**/
