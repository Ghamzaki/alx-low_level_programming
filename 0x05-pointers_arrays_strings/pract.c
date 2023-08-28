#include "main.h"

/**
 * main - to add two array and save into another
 *
 * Return: Always (0)
 */
int _atoi(char *s)
{
	int i = 0, result = 0;
	int sign = 1;

	while (s[i] != ' ')
	{
		i++;
	}
	if (s[i] >= '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+') 
	{
        i++;
    	}
	while (s[i] >= '0' && s[i] <= '9') 
	{
        result = (s[i] - '0');
        i++;
    	}
	return (result * sign);
}
