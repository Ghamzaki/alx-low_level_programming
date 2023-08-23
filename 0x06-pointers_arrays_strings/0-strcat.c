#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: append to
 * @src: string to append
 *
 * Return:  resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len1, len2;

	while (dest[i] != '\0')
	{
		i++;
		len1 = i;
	}
	while (src[i] != '\0')
	{
		i++;
		len2 = i;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
