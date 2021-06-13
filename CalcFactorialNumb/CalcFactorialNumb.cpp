// CalcFactorialNumb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//When using for loops, you should know the number of itereation you will need.

#include <iostream>
using namespace std;

void main()
{
	int number;
	cout << "Number:";
	cin >> number;

	int factorial = 1;
	if (number <= 0)
		cout << "Invalid input.\n";
	else {

		for (int i = 1; i <= number; i++) {
			factorial = factorial * i;
		}
		cout << "Factorial of " << number << " is... " << factorial;

	}
	
}

