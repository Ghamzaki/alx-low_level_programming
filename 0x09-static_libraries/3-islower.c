#include "main.h"

/**
 * _islower - Function that checks for
 * lowercase character
 * @c: the character to check
 * Return: (1) if c is lowercase, elses (0)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	return (0);
}
