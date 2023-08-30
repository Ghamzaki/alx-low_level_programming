#include "main.h"

/**
 * _memset -  fills memory with ifg constant byte.
 * @s: memory area
 * @b: byte to print
 * @n: size
 * Return: pointer to the memory area s
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, result;

	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			if (i == j)
			{
				result = a[i++][j++];
				printf("%d,", result);
			}
		}
	}
}
