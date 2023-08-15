#include <stdio.h>

/**
 * main - prints all possible different combinations
 * of two digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i = 0, j = 'a';;

	while (i <= 9)
	{
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
