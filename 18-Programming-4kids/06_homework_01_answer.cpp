#include<iostream>
#include<cmath>//for the advanced solution
using namespace std;

int main() {

	int num;
	cin >> num;

	// Is even using %2
	bool is_even1 = (num % 2 == 0);

	// is even using /2
	double by2 = (double) num / 2.0;// this is either X.0 or X.5  (try 10, 11)
	by2 = by2 - (int) by2;// Remove X. This is now either 0 (for even) or 0.5 (for odd)
	bool is_even2 = by2 == 0;

	/*
	// is even using %10
	int last_digit = num % 10;	// even last digit is 0, 2, 4, 6, 8
	bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
        */// There is a proplem in this code because if we got a negative number this code can't recognize if it even or odd.
	//so we have two solutions for this proplem

        // is even using %10 (First solution)
	int last_digit = num % 10;	// even last digit is 0, 2, 4, 6, 8 .
	bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8
	|| last_digit == -2 || last_digit == -4 || last_digit == -6 || last_digit == -8; 
	// We will just add the negative number in the bool

	//An advanced solution using cmath library(Second Solution).
	// we can use abs() function for getting the absolute value of the digit
	// is even using %10
	num = abs(num); //this function will return the absolute value of the integer.
	last_digit = num % 10;	// even last digit is 0, 2, 4, 6, 8
	is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

	//there are more solutions using if conditions and the language fundamentals.

	return 0;
}

