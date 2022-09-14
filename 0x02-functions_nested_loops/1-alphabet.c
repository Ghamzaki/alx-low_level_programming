#include "main.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
 */

void print_alphabet(void)
{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
}
