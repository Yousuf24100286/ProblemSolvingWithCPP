/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 3

Modify your program from Programming Project 2
so that it calculates the retroactive salary for a worker for any number of months,
instead of just 6 months.
The number of months is entered by the user.

**/


//include directives
#include<iostream>
#include<conio.h>

//using standard name space
using namespace std;

//main function
int main()
{
    //Variable declaration
	const double increase = 0.076;
	double previous_salary , new_salary ;
	int month ;
	char repeat;

    //statements
	do
	{
		cout << endl << " Enter The Previous Annual Salary: ";
		cin >> previous_salary;
		cout << endl << " Enter The Number Of Months Of The Increase: ";
		cin >> month;

        new_salary = (previous_salary/12)*(1+increase)*month ;

        cout << "\n The New Salary For 6 Month: " << new_salary << endl << endl ;
		cout << " Press \"Enter\" To Repeat The Process Or \"Esc\" To Exit";
		do
		{
			repeat = getch();
			if (repeat == 13 || repeat == 27)
            {
                cout << endl ;
                break;
            }
		} while (true);

		if (repeat == 27)
			break;



	} while (true);

    //Program Ends Here
	return 0;
}
