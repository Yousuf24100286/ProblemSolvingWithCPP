/**

Problem Solving With C++
Chapter 1 / Introduction to Computer and C++ Programming
Programming Project 2

Write a program that prints out “C S !” in large block letters inside a border of *s followed by two blank lines then the message Computer Science is Cool Stuff.

**/


/* Include Directives */
#include<iostream>

/* Using Statndard Methods */
using namespace std ;

int main() //Main Function
{
    /* Statements */
    cout << "*************************************************" << endl ;
    cout << "                                                 " << endl ;
    cout << "        C C C             S S S S          !!    " << endl ;
    cout << "      C       C         S         S        !!    " << endl ;
    cout << "     C                 S                   !!    " << endl ;
    cout << "    C                   S                  !!    " << endl ;
    cout << "    C                     S S S S          !!    " << endl ;
    cout << "    C                             S        !!    " << endl ;
    cout << "     C                             S             " << endl ;
    cout << "      C       C         S         S              " << endl ;
    cout << "        C C C             S S S S          00    " << endl ;
    cout << "                                                 " << endl ;
    cout << "*************************************************" << endl ;

    cout << endl << "Computer Science is Cool Stuff!!!"
    return 0 ;
}
