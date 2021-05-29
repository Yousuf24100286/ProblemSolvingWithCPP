/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 11

Sound travels through air as a result of collisions between the molecules in the air.
The temperature of the air affects the speed of the molecules,
which in turn affects the speed of sound.
The velocity of sound in dry air can be approximated by the formula:

velocity = 331.3 + 0.61 × T

where T is the temperature of the air in degrees Celsius and the velocity is in meters/second.
Write a program that allows the user to input a starting
and an ending temperature.
Within this temperature range,
the program should output the temperature and the corresponding velocity in 1° increments.
For example, if the user entered 0 as the start temperature
and 2 as the end temperature, then the program should output

At 0 degrees Celsius the velocity of sound is 331.3 m/s
At 1 degrees Celsius the velocity of sound is 331.9 m/s
At 2 degrees Celsius the velocity of sound is 332.5 m/s

**/


//include directives
#include<iostream>

//using standard name space
using namespace std;


//main function
int main()
{
    //Variable declaration
    int itemp , ftemp ;

    //statements
    cout << endl << " Enter The Initial Temperature: " ;
    cin >> itemp ;
    cout << " Enter The Final Temperature: " ;
    cin >> ftemp ;
    cout << endl ;

    while(true)
    {
        cout << " At " << itemp << " degrees Celsius the velocity of sound is " << 331.3 + (0.61)*(itemp) << endl ;
        if(itemp < ftemp)
            itemp++ ;
        else if(ftemp < itemp)
            itemp-- ;
        else
            break ;
    }

    //Program Ends Here
	return 0;
}
