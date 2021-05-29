/**
Problem Solving With C++
Chapter 2 / C++ Basics
Programming Project 13

The Harris–Benedict equation estimates the number of calories
your body needs to maintain your weight if you do no exercise.
This is called your basal metabolic rate, or BMR.

The formula for the calories needed for a woman to maintain her weight is

BMR = 655 + (4.3 × weight in pounds) + (4.7 × height in inches) – (4.7 × age in years)

The formula for the calories needed for a man to maintain his weight is

BMR = 66 + (6.3 × weight in pounds) + (12.9 × height in inches) – (6.8 × age in years)

A typical chocolate bar will contain around 230 calories.
Write a program that allows the user to input his or her weight in pounds,
height in inches, age in years, and the character M for male and F for female.
The program should then output the number of chocolate bars that should be consumed
to maintain one’s weight for the appropriate sex of the specified weight, height, and age.


**/


//include directives
#include<iostream>

//using standard name space
using namespace std;


//main function
int main()
{
    //Variable declaration
    double weight , height , age , bmr = 0;
    char gender ;
    const double CHOCOLATE = 230 ;


    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    //statements
    cout << endl ;
    cout << " Enter Your Weight In Pounds: " ;
    cin >> weight ;
    cout << " Enter Your Height In Inches: " ;
    cin >> height ;
    cout << " Enter Your Age In Years: " ;
    cin >> age ;
    do
    {
        cout << " Enter Your Gender(M for Male and F for Female): " ;
        cin >> gender ;
        if(gender == 'M' || gender == 'm' || gender == 'F' || gender == 'f' )
            break ;
    }while(true) ;

    cout << endl ;
    if(gender == 'M' || gender == 'm')
    {
        bmr = 66 + 6.3*weight + 12.9*height - 6.8*age ;
        cout << " For The Given Height, Weight And Age Of A Male The Numbers Of Chocolate Bars To Be Consumed: " << bmr/CHOCOLATE << endl ;
    }
    else
    {
        bmr = 655 + (4.3 * weight ) + (4.7 * height ) - (4.7 * age) ;
        cout << "\n For The Given Height, Weight And Age Of A Female\n The Numbers Of Chocolate Bars To Be Consumed: " << bmr/CHOCOLATE << endl ;
    }



    //Program Ends Here
	return 0;
}
