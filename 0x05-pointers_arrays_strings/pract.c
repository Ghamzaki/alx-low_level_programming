#include "main.h"

/**
 * main - to add two array and save into another
 *
 * Return: Always (0)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len;

	while (src[i] >= '\0')
	{
		i++;
		len = i - 1;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
