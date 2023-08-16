#include "main.h"

/**
 * positive_or_negative - A program that prints
 * all possible combinations of
 * two-digit numbers
 * @i: number to test
 *
 * Return: always (0)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
