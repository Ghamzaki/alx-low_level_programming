#include "main.h"

/**
 * _islower - check for lower case letter
 * @c : character to check the case
 * Return:0 if false or 1 if true
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
return (0);
}
