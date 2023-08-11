#include <stdio.h>

/**
 * main - To print the alphabet in lowercase
 * except q and e
 *
 * Return: Always (0)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	putchar('\n');
	return (0);
}
