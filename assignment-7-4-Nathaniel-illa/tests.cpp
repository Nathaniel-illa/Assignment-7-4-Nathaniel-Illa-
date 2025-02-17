// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1 insertone()", "[example]")
{
	const int SIZE = 100;
	int number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};
	int org[SIZE];
	int usernum, length = 10;
	int result = 1, idx = 0;

	usernum = 22;
	for (int i = 0; i < SIZE; i++)
		org[i] = number[i];
	printout(number, length);
	insertone(number, length, usernum);
	printout(number, length);

	if (number[4] != 22)
		result = 0;

	cout << "----------------------------------------\n";
	for (int i = 0; i < 4; i++)
	{
		if (number[i] != org[i])
		{
			result = 0;
			idx = i;
			break;
		}
	}
	for (int i = 5; i < 11; i++)
	{
		if (number[i] != org[i - 1])
		{
			result = 0;
			idx = i;
			break;
		}
	}
	INFO("insertone() function error: " << number[idx]);
	REQUIRE(result == 1);
	cout << "****************************************\n";
}
// tests for exercise 2
TEST_CASE("Ex2 deleteone()", "[example]")
{
	const int SIZE = 100;
	int number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};
	int org[SIZE];
	int usernum, length = 10;
	int result = 1, idx = 0;

	usernum = 19;
	for (int i = 0; i < SIZE; i++)
		org[i] = number[i];
	printout(number, length);
	deleteone(number, length, usernum);
	printout(number, length);
	cout << "----------------------------------------\n";
	result = (number[0] == 12) ? 1 : 0;
	result = (number[1] == 15) ? 1 : 0;
	result = (number[2] == 21) ? 1 : 0;
	result = (number[3] == 25) ? 1 : 0;
	result = (number[4] == 27) ? 1 : 0;
	result = (number[5] == 29) ? 1 : 0;
	result = (number[6] == 33) ? 1 : 0;
	result = (number[7] == 37) ? 1 : 0;
	result = (number[8] == 43) ? 1 : 0;

	INFO("deleteone() function error: ");
	REQUIRE(result == 1);
	cout << "****************************************\n";
}
