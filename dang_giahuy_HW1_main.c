/**************************************************************
 * Class:  CSC-415-01 Fall 2023
 * Name: Giahuy Dang
 * Student ID: 922722304
 * GitHub Name: leavism
 * Project: Assignment 1 - Command line arguments
 *
 * File: dang_giahuy_HW1_main.c
 *
 * Description:
 *
 **************************************************************/
#include <stdio.h>

int main(int argCount, char *argValues[])
{
	printf("There were %d arguments on the command line.\n", argCount);

	// This traverses the argValues string array to count the
	// number of arguments passed and displays them in
	// the format "Argument <count>:    <argument>"
	for (int i = 0; i < argCount; i++)
	{
		printf("Argument %02d: \t%s\n", i, argValues[i]);
	}

	return 0;
}