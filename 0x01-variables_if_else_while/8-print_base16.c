#include <stdio.h>

/**
 * main -  program that prints all
 * the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int hex;
	char deci;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	for (deci = 'a'; deci <= 'f'; deci++)
	{
		putchar(deci);
	}
	putchar('\n');
	return (0);
}
