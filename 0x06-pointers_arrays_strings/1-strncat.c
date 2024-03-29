#include "main.h"

/**
 * _strncat -  concatenates two strings of n or more bytes.
 * @dest: destination
 * @src: source
 * @n: number of byte
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j++];
	}
	return (dest);
}
