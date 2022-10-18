// ch8LargerNumbersWithArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//random number function
#include <cstdlib>
//time function
#include <ctime>
// prototypes


int main()
{
    std::cout << "Chapter 8 Larger Numbers With Array by Kevin Bell\n";
	std::cout << "The program contains an array holding 25 integers between 1 and 100.\n";
	std::cout << "The array contains:\n\n";
	int arraySize = 25;
	// seed the random number generator
	unsigned seed;
	seed = time(0);
	srand(seed);
	//the two dimensional array filled with random numbers
	double array[5][5];
	// store the random numbers in the array
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = rand() % 100 + 1;
		} // end for j
	} // end for i
	// display array numbers
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << array[i][j] << " ";
		} // end inner for
		std::cout << std::endl;
	} // end outer for
	std::cout << "If you enter an integer in this range, the program will tell you how many of the numbers are larger than your value\n\n";
	int value;
	std::cout << "Enter an integer between 1 and 100: ";
	std::cin >> value;
	while (value < 1 || value > 100)
	{
		std::cout << "Invalid value. Enter an integer between 1 and 100: ";
		std::cin >> value;
	} // end while
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (array[i][j] > value)
			{
				count++;
			} // end if
		} // end inner for
	} // end outer for
	std::cout << count << " of the " << arraySize << " numbers are larger than " << value << std::endl;
	system("pause");
	return 0;
} // end main
