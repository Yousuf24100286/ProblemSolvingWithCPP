/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 8

You have just purchased a stereo system that cost $1,000 on the following credit plan: no down payment,
an interest rate of 18% per year (and hence 1.5% per month), and monthly payments of $50.
The monthly payment of $50 is used to pay the interest
and whatever is left is used to pay part of the remaining debt.
Hence, the first month you pay 1.5% of $1,000 in interest.
That is $15 in interest.
So, the remaining $35 is deducted from your debt, which leaves you with a debt of $965.00.
The next month you pay interest of 1.5% of $965.00, which is $14.48.
Hence, you can deduct $35.52 (which is $50 – $14.48) from the amount you owe.
Write a program that will tell you how many months it will take you to pay off the loan,
as well as the total amount of interest paid over the life of the loan.
Use a loop to calculate the amount of interest and the size of the debt after each month.
(Your final program need not output the monthly amount of interest paid and remaining debt,
but you may want to write a preliminary version of the program that does output these values.)
Use a variable to count the number of loop iterations and hence the number of months until the debt is zero.
You may want to use other variables as well.
The last payment may be less than $50. Do not forget the interest on the last payment.
If you owe $50, then your monthly payment of $50 will not pay off your debt, although it will come close.
One month’s interest on $50 is only 75 cents.
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


    double loan , interest , interest_amount , Mpayment = 50 ;
    int counter = 0 ;
    cout << "\n Enter The Price: " ;
    cin >> loan ;
    cout << " Enter The Interest Rate (In Percent): " ;
    cin >> interest ;
    cout << endl ;
    while(loan >= 0)
    {
        interest_amount = loan*interest/100.0 ;
        cout << " On Month " << counter << " The Amount Of Interest: " << interest_amount << " And The Debt Remaining After The Month: " << loan << endl ;
        loan = loan - ( Mpayment - interest_amount) ;
        counter++ ;
    }
    cout << "\n In " << counter+1 << " Months The Amount Of Debt Will Be 0" << endl ;


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
