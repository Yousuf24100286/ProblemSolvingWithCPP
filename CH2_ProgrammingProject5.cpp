/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 4

Write a program that determines whether a meeting room is in violation of fire law regulations
regarding the maximum room capacity. The program will read in the maximum room capacity
and the number of people attending the meeting.
If the number of people is less than or equal to the maximum room capacity,
the program announces that it is legal to hold the meeting
and tells how many additional people may legally attend.
If the number of people exceeds the maximum room capacity,
the program announces that the meeting cannot be held as planned due to fire regulations
and tells how many people must be excluded in order to meet the fire regulations.

**/


//include directives
#include<iostream>
#include<conio.h>

//using standard name space
using namespace std;

void fire_regulation_check()
{
    int capacity , attendees;
    cout << "\n Enter The Maximum Legal Room Capacity: " ;
    cin >> capacity ;
    cout << " Enter The Number Of People Attending The Meeting: " ;
    cin >> attendees ;

    if(attendees <= capacity)
    {
        cout << "\n It Is Legal To Hold The Meeting" ;
        cout << "\n The Additional Number Of People Who May Legally Attend: " << capacity - attendees ;
    }
    else
    {
        cout << "\n It Is Not Legal To Hold The Meeting" ;
        cout << "\n The Number Of People Must Exit The Room To Make The Meeting Legal To Hold: " << attendees - capacity ;
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
        fire_regulation_check() ;
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
