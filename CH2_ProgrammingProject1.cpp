/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 1

A government research lab has concluded that an artificial sweetener commonly used in diet soda pop will cause death in laboratory mice.
A friend of yours is desperate to lose weight but cannot give up soda pop.
Your friend wants to know how much diet soda pop it is possible to drink without dying as a result.
Write a program to supply the answer.
Assume that the lethal dose for a mouse is proportional to the lethal dose for the human.
A single can of soda pop has a mass of 350 grams.
To ensure the safety of your friend,
be sure the program requests the weight at which the dieter will stop dieting,
rather than the dieter’s current weight.
Assume that diet soda contains 1/10th of 1% artificial sweetener.

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
	const double can_serving = 350, sweetner_can_percent = 0.001;
	double amount_kill_mouse, mouse_mass, human_mass , amount_kill_human , number_of_can ;
	char repeat;
	bool brepeat;

    //statements
	do
	{
		cout << endl << " Enter The Amount (In Grams) Of Sweetener Required To Kill A Mouse: ";
		cin >> amount_kill_mouse;
		cout << " Enter The Mass (In Grams) Of A Mouse: ";
		cin >> mouse_mass;
		cout << " Enter The Mass(In Pounds) Of The Dieter At Which He/She Stops Dieting: ";
		cin >> human_mass;
		human_mass = human_mass * 454;

		amount_kill_human = human_mass * amount_kill_mouse / mouse_mass ;

		number_of_can = amount_kill_human / (can_serving * sweetner_can_percent);

		cout << " The Number of Allowed Can (Of 350 gm Serving Containing 1% Of The Sweetner) For The Dieter: " << number_of_can << endl << endl;

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
