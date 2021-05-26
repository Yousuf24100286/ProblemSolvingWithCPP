/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 2

Workers at a particular company have won a 7.6% pay increase retroactive for 6 months.
Write a program that takes an employee’s previous annual salary as input,
and outputs the amount of retroactive pay due the employee, the new annual salary,
and the new monthly salary.
Your program should allow the calculation to be repeated as often as the user wishes.

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
	double previous_salary , new_salary;
	char repeat;

    //statements
	do
	{
		cout << endl << " Enter The Previous Annual Salary: ";
		cin >> previous_salary;

        new_salary = (previous_salary/12)*(1+increase)*6 ;

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

