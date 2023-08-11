#include <stdio.h>

/**
 * main - To print all single digit
 * numbers of base 10 starting from 0
 *
 * Return: Always (0)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
