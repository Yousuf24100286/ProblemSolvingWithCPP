/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 11

Many private water wells produce only 1 or 2 gallons of water per minute.
One way to avoid running out of water with these low-yield wells is to use a holding tank.
A family of four will use about 250 gallons of water per day.
However, there is a “natural” water holding tank in the casing
(that is, the hole) of the well itself. A deeper well stores more water
that can be pumped out for household use. But how much water will be available?
Write a program that allows the user to input the radius of the well casing in inches
(a typical well will have a 3-inch radius) and the depth of the well in feet
(assume water will fill this entire depth, although in practice that will not be true
since the static water level will generally be 50 feet or more below the ground surface).
The program should output the number of gallons stored in the well casing.
For your reference, the volume of a cylinder is pi*r^2*h,
where r is the radius and h is the height, and 1 cubic foot = 7.48 gallons of water.

For example, a 300-foot-well full of water with a radius of 3 inches
for the casing holds about 441 gallons of water—plenty for a family of four
and no need to install a separate holding tank.


**/


//include directives
#include<iostream>

//using standard name space
using namespace std;


//main function
int main()
{
    //Variable declaration
    double radius , depth , volume;
    const double GALLON = 7.48 ;


    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    //statements
    cout << endl << " Enter The Radius Of The Well(In Inches): " ;
    cin >> radius ;
    cout << " Enter The Depth Of The Well(In Feet): " ;
    cin >> depth ;
    cout << endl ;
    volume = 3.14*radius*radius*depth/144 ;
    cout << " The Well Is Of Volume " << volume << " Cubic-Foot And Can Hold " << volume*GALLON << " Gallons Of Water\n" ;

    //Program Ends Here
	return 0;
}
