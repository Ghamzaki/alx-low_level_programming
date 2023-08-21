#include "main.h"

/**
 * puts2 - prints every other character of
 * a string, starting with the first
 * character, followed by a new line.
 *
 * @str: string to check
 * Return: void
 */
void puts2(char *str)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
