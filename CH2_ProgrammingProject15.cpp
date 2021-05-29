/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 15

It is important to consider the effect of thermal expansion
when building a structure that must withstand changes in temperature.
For example, a metal beam will expand in hot temperatures.
The additional stress could cause the structure to fail.
Similarly, a material will contract in cold temperatures.
The linear change in length of a material
if it is allowed to freely expand is described by the following equation:

    L∆ = αL0T∆

Here, L0 is the initial length of the material in meters,
L∆ is the displacement in meters,
T∆ is the change in temperature in Celsius,
and α is a coefficient for linear expansion.
Write a program that inputs α, L0, and T∆, then calculates and outputs the linear displacement.
If the displacement is positive, then output that
“The material will expand by” the displacement in meters.
If the displacement is negative, then output that
“The material will contract by” the displacement in meters.
You shouldn’t output the displacement as a negative number.
Here are some values for α for different materials.

Aluminum 2.31 × 10-5
Copper 1.70 × 10-5
Glass 8.50 × 10-6
Steel 1.20 × 10-5

**/


//include directives
#include<iostream>

//using standard name space
using namespace std;


//main function
int main()
{
    //Variable declaration
    double Tdelta , Linitial , Alpha , Ldelta ;

    //statements
    cout << endl ;
    cout << " Enter The Linear Thermal Expansion Co-Efficient Of The Material: " ;
    cin >> Alpha ;
    cout << " Enter The Initial Length Of The Material: " ;
    cin >> Linitial ;
    cout << " Enter The Change In Temperature Of The Material In Kelvin: " ;
    cin >> Tdelta ;

    Ldelta = Alpha*Linitial*Tdelta ;

    if(Ldelta > 0)
        cout << "\n The Material Will Expand By " << Ldelta << " Meters\n" ;
    else
        cout << "\n The Material Will Contract By " << -1*Ldelta << " Meters\n" ;


    //Program Ends Here
	return 0;
}
