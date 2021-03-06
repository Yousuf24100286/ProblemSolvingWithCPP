/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 4

Negotiating a consumer loan is not always straightforward.
One form of loan is the discount installment loan, which works as follows.
Suppose a loan has a face value of $1,000, the interest rate is 15%,
and the duration is 18 months.
The interest is computed by multiplying the face value of $1,000 by 0.15, to yield $150.
That figure is then multiplied by the loan period of 1.5 years to yield $225 as the total interest owed.
That amount is immediately deducted from the face value, leaving the consumer with only $775.
Repayment is made in equal monthly installments based on the face value.
So the monthly loan payment will be $1,000 divided by 18, which is $55.56.
This method of calculation may not be too bad if the consumer needs $775 dollars,
but the calculation is a bit more complicated if the consumer needs $1,000.
Write a program that will take three inputs: the amount the consumer needs to receive,
the interest rate, and the duration of the loan in months.
The program should then calculate the face value required in order for the consumer to receive the amount needed.
It should also calculate the monthly payment.
Your program should allow the calculations to be repeated as often as the user wishes.

**/


//include directives
#include<iostream>
#include<conio.h>

//using standard name space
using namespace std;

void loan()
{
    double FValue , interest, duration , need ;
    cout << "\n Enter The Amount Needed: " ;
    cin >> need ;
    cout << " Enter The Interest Rate (In Percentage): " ;
    cin >> interest ;
    cout << " Enter The Duration (In Months) Of The Loan: " ;
    cin >> duration ;

    FValue = ( need ) / ( 1 - ( (interest/100.0)*(duration/12.0)) ) ;

    cout << "\n The Face Value Required In Order To Receive The Needed Amount: " << FValue ;
}



//main function
int main()
{
    //Variable declaration
	char repeat;

    //statements
	do
	{
        loan() ;
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
