#include "main.h"

/**
 * print_alphabet - To print the alphabets
 * in lowercase followwed by a new line
 *
 * Return: Always (0)
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
