// ch8LargerNumbersWithArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//random number function
#include <cstdlib>
//time function
#include <ctime>
//random number header file
#include "RandomNumbers.h"

// prototypes
void randomNumbers(int array[][5], int rows, int columns);
void displayArray(int array[][5], int rows, int columns);
void countLarger(int array[][5], int rows, int columns, int value);

int main()
{
	//variables
	const int rows = 5;
	const int columns = 5;
	int value, count = 0, arraySize = 25, array[rows][columns];
	// seed the random number generator
	unsigned seed;
	seed = time(0);
	srand(seed);
	std::cout << "Chapter 8 Larger Numbers With Array by Kevin Bell\n";
	std::cout << "The program contains an array holding 25 integers between 1 and 100.\n";
	std::cout << "The array contains:\n\n";
	// call randomNumbers function
	randomNumbers(array, rows, columns);
	// call displayArray function
	displayArray(array, rows, columns);
	std::cout << "If you enter an integer in this range, the program will tell you how many of the numbers are larger than your value\n\n";
	std::cout << "Enter an integer between 1 and 100: ";
	std::cin >> value;
	while (value < 1 || value > 100)
	{
		std::cout << "Invalid value. Enter an integer between 1 and 100: ";
		std::cin >> value;
	} // end while
	// call countLarger function
	countLarger(array, rows, columns, value);
	system("pause");
	return 0;
} // end main
