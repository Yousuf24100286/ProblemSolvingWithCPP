/**

Problem Solving With C++
Chapter 1 / Introduction to Computer and C++ Programming
Programming Project 5

Write a program that inputs a character from the keyboard
and then outputs a large block letter “C” composed of that character.
For example, if the user inputs the character “X,” then the output should look as follows:

The Program code is extended to print the character(That must be any capital alphabetical letter) as large block letter
with the given character input
the program can print the series of character one by one with the slight time delay that is given in the code.


**/



//include directives
#include<iostream>
#include<string>

//using standard methods
using namespace std ;

// global variable declaration
int const ROWS = 16 , COLS = 16 ;


//functions
int lesser(int a , int b)
{
    if(a < b)
        return a ;
    else
        return b ;
}

int larger(int a , int b)
{
    if(a > b)
        return a ;
    else
        return b ;
}

void initialize_row( bool *first_value)
{
   for(int i = 0 ; i <= COLS ; i++)
        *(first_value + i) = false ;
}

void initialize_board( bool *first_value)
{
    for(int i = 0 ; i <= ROWS ; i++)
        initialize_row( first_value + i*(ROWS+1) ) ;
}

void bprint( bool Board[ROWS][COLS] , string input)
{
    cout << "\n\n\n\n\n" ;
    for(int i = 0 ; i < ROWS ; i++)
    {
        cout << "     " ;
        for( int j = 0 ; j < COLS ; j++)
        {
            if(Board[i][j] == true)
                cout << input ;
            else
                cout << " " ;
        }
        cout << endl ;
    }
}


void filler(bool Filler[ROWS] , string pattern )
{
    initialize_row(Filler) ;
    for(int i = 1 ; i <= 4 ; i++)
    {
        string check = pattern.substr(i-1 , 1) ;
        if(check == "1")
        {
            for(int j = 0 ; j < 4 ; j++)
                Filler[ 4*(i-1) + j ] = true ;
        }

    }
}

void horizontal( bool Board[ROWS][COLS] , bool Filler[ROWS] , int row , string pattern )
{
    filler(Filler , pattern) ;
    for(int i = 0 ; i < ROWS ; i++)
    {
        Board[row][i] = Board[row][i] + Filler[i] ;
    }
}

void vertical( bool Board[ROWS][COLS] , bool Filler[ROWS] , int column , string pattern )
{
    filler(Filler , pattern) ;
    for(int i = 0 ; i < COLS ; i++)
    {
        Board[i][column] = Board[i][column] + Filler[i] ;
    }
}

void diagonal( bool Board[ROWS][COLS] , bool Filler[ROWS] , int row , int column , string pattern )
{
    filler(Filler , pattern) ;
    for(int i = 0 ; i < lesser(ROWS - row,COLS - column) ; i++)
    {
        Board[row + i][column + i] = Board[row + i][column + i] + Filler[i] ;
    }
}

void rdiagonal( bool Board[ROWS][COLS] , bool Filler[ROWS] , int row , int column , string pattern )
{
    filler(Filler , pattern) ;
    for(int i = 0 ; i < lesser(ROWS - row,column) ; i++)
    {
        Board[row + i][column - i] = Board[row + i][column - i] + Filler[i] ;
    }
}



void slopy( bool Board[ROWS][COLS] , bool Filler[ROWS] , int row , int column , double slope , string pattern )
{
    filler(Filler , pattern);
    for(int i = 0 ; i < ROWS-row ; i++)
    {
        int slopeVal = i*slope ;
        Board[row + i][column + slopeVal] = Board[row + i][column + slopeVal] + Filler[i] ;
    }
}

void INPUT( bool Board[ROWS][COLS] , bool Filler[ROWS] , string userin)
{
    if(userin == "A")
    {
        slopy(Board , Filler , 0 , 7 , -0.5 , "1111") ;
        slopy(Board , Filler , 0 , 8 , 0.5 , "1111") ;
        horizontal(Board , Filler , 8 , "0110");
    }
    else if(userin == "B")
    {
        vertical(Board , Filler , 0 , "1111");
        horizontal(Board , Filler , 0 , "1000");
        horizontal(Board , Filler , 7 , "1100");
        horizontal(Board , Filler , 15 , "1100");
        diagonal(Board , Filler , 0 , 4 , "1000");
        rdiagonal(Board , Filler , 4 , 8 , "1000");
        diagonal(Board , Filler , 0 , 0 , "0010");
        rdiagonal(Board , Filler , 8 , 15 , "0100");
    }
    else if(userin == "C")
    {

        vertical(Board , Filler , 0 , "0110");
        diagonal(Board , Filler , 12 , 0 , "1000");
        rdiagonal(Board , Filler , 0 , 4 , "1000");
        horizontal(Board , Filler , 0 , "0100");
        horizontal(Board , Filler , 15 , "0100");


    }
    else if(userin == "D")
    {
        vertical(Board , Filler , 0 , "1111");
        vertical(Board , Filler , 12 , "0110");
        horizontal(Board , Filler , 0 , "1100");
        horizontal(Board , Filler , 15 , "1100");
        diagonal(Board , Filler , 0 , 8 , "1000");
        rdiagonal(Board , Filler , 12 , 12 , "1000");
    }
    else if(userin == "E")
    {
        INPUT(Board , Filler , "F") ;
        horizontal(Board , Filler , 15 , "1110") ;
    }
    else if(userin == "F")
    {
        vertical(Board , Filler , 0 , "1111");
        horizontal(Board , Filler , 0 , "1110") ;
        horizontal(Board , Filler , 7 , "1100") ;
    }
    else if(userin == "G")
    {
        INPUT(Board , Filler , "C") ;
        vertical(Board , Filler , 12 , "0001") ;
        horizontal(Board , Filler , 12 , "0010") ;
        diagonal(Board , Filler , 0 ,0 , "0001") ;
    }
    else if(userin == "H")
    {
        horizontal(Board , Filler , 7 , "1110");
        vertical(Board , Filler , 1 , "1111") ;
        vertical(Board , Filler , 12 , "1111") ;
    }
    else if(userin == "I")
    {
        vertical(Board , Filler , 4 , "1111") ;
        horizontal(Board , Filler , 0 , "1100") ;
        horizontal(Board , Filler , 15 , "1100") ;
    }
    else if(userin == "J")
    {
        vertical(Board , Filler , 4 , "1111") ;
        vertical(Board , Filler , 0 , "0001") ;
        horizontal(Board , Filler , 0 , "1100") ;
        horizontal(Board , Filler , 15 , "1000") ;

    }
    else if(userin == "K")
    {
        vertical(Board , Filler , 0 , "1111") ;
        diagonal(Board , Filler , 7 , 0 , "1100") ;
        rdiagonal(Board , Filler , 0 , 7 , "1100") ;
    }
    else if(userin == "L")
    {
        vertical(Board , Filler , 0 , "1111") ;
        horizontal(Board , Filler , 15 , "1110") ;
    }
    else if(userin == "M")
    {
        vertical(Board , Filler , 1 , "1111" ) ;
        vertical(Board , Filler , 15 , "1111" ) ;
        diagonal(Board , Filler , 0 , 0 , "1100" );
        rdiagonal(Board , Filler , 0 , 15 , "1100" );
    }
    else if(userin == "N")
    {
        vertical(Board , Filler , 1 , "1111" ) ;
        vertical(Board , Filler , 15 , "1111" ) ;
        diagonal(Board , Filler , 0 , 0 , "1111" );
    }
    else if(userin == "O")
    {
        INPUT(Board , Filler , "C") ;
        vertical(Board , Filler , 15 , "0110");
        horizontal(Board , Filler , 0 , "0010");
        horizontal(Board , Filler , 15 , "0010");
        diagonal(Board , Filler , 0 , 12 , "1000");
        rdiagonal(Board , Filler , 12 , 15 , "1000");

    }
    else if(userin == "P")
    {
        vertical(Board , Filler , 0 , "1111" ) ;
        horizontal(Board , Filler , 0 , "1100");
        horizontal(Board , Filler , 7 , "1100");
        diagonal(Board , Filler , 0 , 8 , "1000");
        rdiagonal(Board , Filler , 4 , 12 , "1000");
    }
    else if(userin == "Q")
    {
        INPUT(Board , Filler , "O");
        diagonal(Board , Filler , 0 , 0 , "0001") ;
    }
    else if(userin == "R")
    {
        INPUT(Board , Filler , "P") ;
        diagonal(Board , Filler , 8 , 4 , "1100") ;
    }
    else if(userin == "S")
    {
        horizontal(Board , Filler , 0 , "0110" ) ;
        horizontal(Board , Filler , 7 , "0110" ) ;
        horizontal(Board , Filler , 15 , "0110" ) ;
        diagonal(Board , Filler , 4 , 0 , "1000" );
        diagonal(Board , Filler , 0 , 4 , "0010" );
        rdiagonal(Board , Filler , 0 , 4 , "1000" );
        rdiagonal(Board , Filler , 12 , 15 , "1000" );
    }
    else if(userin == "T")
    {
        horizontal(Board , Filler , 0 , "1111" ) ;
        vertical(Board , Filler , 8 , "1111" ) ;
    }
    else if(userin == "U")
    {
        vertical(Board , Filler , 0 , "1110" ) ;
        vertical(Board , Filler , 15 , "1110" ) ;
        diagonal(Board , Filler , 12 , 0 , "1000" );
        rdiagonal(Board , Filler , 12 , 15 , "1000" );
        horizontal(Board , Filler , 15 , "0110" ) ;
    }
    else if(userin == "V")
    {
        slopy(Board , Filler , 0 , 15 , -0.5 , "1111") ;
        slopy(Board , Filler , 0 , 0 , 0.5 , "1111") ;
    }
    else if(userin == "W")
    {
        vertical(Board , Filler , 0 , "1111" ) ;
        vertical(Board , Filler , 15 , "1111" ) ;
        diagonal(Board , Filler , 0 , 0 , "0011" );
        rdiagonal(Board , Filler , 0 , 15 , "0011" );
    }
    else if(userin == "X")
    {
        diagonal(Board , Filler , 0 , 0 , "1111" );
        rdiagonal(Board , Filler , 0 , 15 , "1111" );
    }
    else if(userin == "Y")
    {
        diagonal(Board , Filler , 0 , 0 , "1100" );
        rdiagonal(Board , Filler , 0 , 15 , "1100" );
        vertical(Board , Filler , 7 , "0011" ) ;
        vertical(Board , Filler , 8 , "0011" ) ;
    }
    else if(userin == "Z")
    {
        horizontal(Board , Filler , 0 , "1111" ) ;
        horizontal(Board , Filler , 15 , "1111" ) ;
        rdiagonal(Board , Filler , 0 , 15 , "1111" );
    }
}

//main function
int main()
{
    //variable declaration
    bool Board[ROWS][COLS] ;
    bool Filler[ROWS] ;
    //statements
    initialize_board(&Board[0][0]) ;
    string Input , Entry;
    cout << "Enter Your Name: " ;
    cin >> Input ;
    _sleep(500) ;
    system("cls") ;
    int LENGTH = Input.length() ;

    for(int i = 0 ; i < LENGTH ; i++)
    {
        Entry = Input.substr(i,1) ;
        INPUT(Board , Filler , Entry) ;
        bprint( Board , Entry) ;
        _sleep(500) ;
        system("cls") ;
        _sleep(100);
        initialize_board(&Board[0][0]) ;
    }
    //Program ends here
    return 0 ;
}
