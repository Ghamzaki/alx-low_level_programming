#include "main.h"

/**
 * _strncpy - copies a string of n number
 * @dest: destination
 * @src: source
 * @n: nomber of characters
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
