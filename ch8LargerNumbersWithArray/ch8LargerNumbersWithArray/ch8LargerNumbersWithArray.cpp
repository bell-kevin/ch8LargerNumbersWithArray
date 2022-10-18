// ch8LargerNumbersWithArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Chapter 8 Larger Numbers With Array by Kevin Bell\n";
	std::cout << "The program contains an array holding 25 integers between 1 and 100.\n";
	std::cout << "The array contains:\n\n";
	int arraySize = 25;
	//the two dimensional array
	int numbers[5][5] = { { 48, 39, 84, 44, 66 },
	{ 36, 14, 99, 25, 69 },
	{ 84, 4, 67, 22, 29 },
	{ 87, 98, 52, 32, 59 },
	{ 56, 59, 19, 89, 59 } };
	// display array numbers
	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			std::cout << numbers[row][column] << " ";
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
	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			if (numbers[row][column] > value)
			{
				count++;
			} // end if
		} // end inner for
	} // end outer for
	std::cout << count << " of the " << arraySize << " numbers are larger than " << value << std::endl;
	system("pause");
	return 0;
} // end main