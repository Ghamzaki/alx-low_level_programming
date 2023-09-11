#include "main.h"

/**
 * alloc_grid -  concatenates two strings.
 * @width: breadth of array
 * @height: length of array 
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;


	ptr = malloc(sizeof(int) * (width * height));

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
	free(ptr);
}
