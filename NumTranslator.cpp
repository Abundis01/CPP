//main.cpp
#include <iostream>
#include <string>
#include "Numbers.h"

using namespace std;

int main()
{
   int number;
   
    cout << "This program translates whole "
         << "dollar amounts into words for the\n"
         << "for the purpose of writing checks.\n"
         << "Entering a negative number terminates "
         << "the program.\n"
         << "Enter an amount for be translated "
         << "into words: ";
    cin >> number;
    
    while (number >= 0)
    {
        // Create an Numbers object.
        Numbers n (number);
        
        // Print the English representation of the number
        n.print();
        
        // Get another number.
        
        cout << "\nEnter another number: ";
        cin >> number;
    }         
    return 0;
}
//numbers.h
#include <iostream>
#include <string>
using namespace std;

//class of numbers
class Numbers
{
//private variables
private:
int number; 

//Static arrays to hold words
static string one2Twenty[20];
static string tens[10];
static string hundred;
static string thousand;
public: 
//this is the constructor
Numbers(int x)
{ 
  number = x;
}

//print the words for the number
void print();
};

//names for the places in the arrays
string Numbers::one2Twenty[20] = 
{ "zero", "one", "two", "three", "four", "five",
"six", "seven", "eight", "nine", "ten", 
"eleven", "twelve", "thirteen", "fourteen", 
"fifteen", "sixteen", "seventeen", "eighteen",
"nineteen", 
};
string Numbers::tens[10] = 
{ "zero", "ten", "twenty", "thirty", "forty",
"fifty", "sixty", "seventy", "eighty", "ninety",
};

string Numbers::hundred =" hundred ";
string Numbers::thousand = " thousand ";

void Numbers::print()
{
//set up a remainder to keep the numbers going
int remainder = number;

//math involved for the nubers 1000-9000
int num_thousand = remainder / 1000;
remainder = remainder % 1000;
if (num_thousand > 0) 
{
cout << one2Twenty[num_thousand];
cout << thousand;
}

//math involved for the numbers 100-900
int num_hundreds = remainder / 100;
remainder = remainder % 100;
if (num_hundreds > 0) 
{
cout << one2Twenty[num_hundreds];
cout << hundred;
}

//math involved for the numbers 10-90
int num_tens = remainder / 10;
remainder = remainder % 10;
if (num_tens > 0) 
{
cout << tens[num_tens];
}
//math involved for numbers 1-9
int num_ones = remainder / 1;
remainder = remainder % 1;
if (num_ones > 0) 
{
cout << one2Twenty[num_ones];
}

}
