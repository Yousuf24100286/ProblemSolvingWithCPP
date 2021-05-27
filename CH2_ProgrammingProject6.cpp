/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 6

An employee is paid at a rate of $16.78 per hour for the first 40 hours worked in a week.
Any hours over that are paid at the overtime rate of one and-one-half times that.
From the worker’s gross pay, 6% is withheld for Social Security tax,
14% is withheld for federal income tax, 5% is withheld for state income tax,
and $10 per week is withheld for union dues.
If the worker has three or more dependents,
then an additional $35 is withheld to cover the extra cost of health insurance
beyond what the employer pays.
Write a program that will read in the number of hours worked in a week
and the number of dependents as input and will then output the worker’s gross pay,
each withholding amount,
and the net take-home pay for the week.

**/


//include directives
#include<iostream>
#include<conio.h>

//using standard name space
using namespace std;

void pay()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    const double rate = 16.78 ;
    double pay ;
    int SStax = 6 , FItax = 14 , SItax = 5 , Udues = 10 , Whours , dependants , Hinsurance = 0;
    cout << "\n Enter The Number Of Hours Worked In A Week: " ;
    cin >> Whours ;
    cout << " Enter The Number Dependants: " ;
    cin >> dependants ;

    if(Whours <= 40)
        pay = Whours*rate ;
    else
        pay = 40*rate + (Whours-40)*rate*1.5 ;

    cout << "\n The Gross Pay: " << pay << endl ;
    cout << " The Social Security Tax: " << pay*SStax/100.0 << endl ;
    cout << " The Social Federal Income Tax: " << pay*FItax/100.0 << endl ;
    cout << " The Social State Income Tax: " << pay*SItax/100.0 << endl ;
    cout << " The Union Dues: " << Udues << endl ;
    if(dependants >= 3)
    {
        Hinsurance = 35 ;
        cout << " The Health Insurance: " << Hinsurance << endl ;
    }
    cout << "\n The Net Take Home Pay: " << pay*(100 - SStax+FItax+SItax)/100.0 - Udues - Hinsurance ;

}



//main function
int main()
{
    //Variable declaration
	char repeat;

    //statements
	do
	{
        pay() ;
        cout << "\n\n Press \"Enter\" To Repeat The Process Or \"Esc\" To Exit";
		do
		{
			repeat = getch();
			if (repeat == 13 || repeat == 27)
            {
                cout << endl << endl ;
                break;
            }
		} while (true);

		if (repeat == 27)
			break;



	} while (true);

    //Program Ends Here
	return 0;
}
