#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: size/number of arguments
 * @argv: arguments passed
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
