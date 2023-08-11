#include <stdio.h>

/**
 * main - TO print all alphabet
 * in lowercase except q and e
 *
 * Reurn: ALways (0)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	putchar('\n');
	return (0);
}
