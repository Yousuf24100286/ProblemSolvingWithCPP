/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 7

It is difficult to make a budget that spans several years, because prices are not stable.
If your company needs 200 pencils per year,
you cannot simply use this year’s price as the cost of pencils 2 years from now.
Because of inflation the cost is likely to be higher than it is today.
Write a program to gauge the expected cost of an item in a specified number of years.
The program asks for the cost of the item,
the number of years from now that the item will be purchased, and the rate of inflation.
The program then outputs the estimated cost of the item after the specified period.
Have the user enter the inflation rate as a percentage, like 5.6 (percent).

**/


//include directives
#include<iostream>
#include<conio.h>

//using standard name space
using namespace std;

void costs()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    double Irate , price ;
    int period ;
    cout << "\n Enter The Price Of The Product: " ;
    cin >> price ;
    cout << " Enter The Inflation Rate (In Percent): " ;
    cin >> Irate ;
    cout << " Enter The Number Of Years: " ;
    cin >> period ;
    cout << endl ;
    for(int i = 1 ; i <= period ;i++)
    {
        price = price + price*Irate/100.0 ;
        cout << " The Price Of The Product After " << i << " Years: " << price << endl ;
    }

}



//main function
int main()
{
    //Variable declaration
	char repeat;

    //statements
	do
	{
        costs() ;
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
