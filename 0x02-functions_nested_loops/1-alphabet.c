#include "main.h"

/**
 * main - To print the alphabets
 * in lowercase followwed by a new line
 *
 * Return: Always (0)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
