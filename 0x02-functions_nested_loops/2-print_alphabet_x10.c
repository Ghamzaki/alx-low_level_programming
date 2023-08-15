#include "main.h"

/**
 * print_alphabet_x10 - To print 10 times the alphabet
 * in lowercase
 *
 * Return (void)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
