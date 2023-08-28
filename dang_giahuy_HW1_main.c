/**************************************************************
 * Class:  CSC-415-01 Fall 2023
 * Name: Giahuy Dang
 * Student ID: 922722304
 * GitHub Name: leavism
 * Project: Assignment 1 – Command Line Arguments
 *
 * File: dang_giahuy_HW1_main.c
 *
 * Description: The main function for this simple program. 
 * Takes passed in arguments and prints the corresponding
 * argument index and value.
 *
 **************************************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
	// Checks for singular argument to print with propper grammar
	if (argc == 1)
	{
		printf("There was %d argument on the command line.\n", argc);
	}
	else
	{
		printf("There were %d arguments on the command line.\n", argc);
	}

	// Counts the number of arguments passed into argv and prints
	// them in the format "Argument <argument index>:    <argument>"
	for (int index = 0; index < argc; index++)
	{
		printf("Argument %02d: \t%s\n", index, argv[index]);
	}
	return 0;
}