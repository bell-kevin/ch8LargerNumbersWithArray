#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
// prototypes
void randomNumbers(int array[][5], int rows, int columns);
void displayArray(int array[][5], int rows, int columns);
void countLarger(int array[][5], int rows, int columns, int value);

// randomNumbers function
void randomNumbers(int array[][5], int rows, int columns)
{
	// seed the random number generator
	unsigned seed;
	seed = time(0);
	srand(seed);
	// store the random numbers in the array
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i][j] = rand() % 100 + 1;
		} // end for j
	} // end for i
} // end function randomNumbers

// displayArray function
void displayArray(int array[][5], int rows, int columns)
{
	// display array numbers
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << array[i][j] << " ";
		} // end inner for
		std::cout << std::endl;
	} // end outer for
} // end function displayArray

// countLarger function
void countLarger(int array[][5], int rows, int columns, int value)
{
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (array[i][j] > value)
			{
				count++;
			} // end if
		} // end inner for
	} // end outer for
	std::cout << count << " of the " << rows * columns << " numbers are larger than " << value << std::endl;
} // end function countLarger
