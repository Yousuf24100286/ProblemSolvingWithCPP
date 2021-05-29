/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 14

Write a program that calculates the total grade for N classroom exercises as a percentage.
The user should input the value for N followed by each of the N scores and totals.
Calculate the overall percentage (sum of the total points earned divided by the total points possible)
and output it as a percentage. Sample input and output is shown below.

How many exercises to input? 3

Score received for exercise 1: 10
Total points possible for exercise 1: 10

Score received for exercise 2: 7
Total points possible for exercise 2: 12

Score received for exercise 3: 5
Total points possible for exercise 3: 8

Your total is 22 out of 30, or 73.33%.



**/


//include directives
#include<iostream>

//using standard name space
using namespace std;


//main function
int main()
{
    //Variable declaration
    int exercises , score , total , cscore = 0 , ctotal = 0;

    //statements
    cout << endl ;
    cout << " How Many Exercises To Input: " ;
    cin >> exercises ;

    for(int i = 1 ; i <= exercises ; i++)
    {
        cout << "\n Score received for exercise " << i << ": " ;
        cin >> score ;
        cout << " Total points possible for exercise " << i << ": " ;
        cin >> total ;
        cscore = cscore + score ;
        ctotal = ctotal + total ;
    }

    cout << "\n Your Total Score Is " << cscore << " Out Of " << ctotal << " Or " << (cscore/(ctotal*1.0))*100 << "%" << endl ;




    //Program Ends Here
	return 0;
}
