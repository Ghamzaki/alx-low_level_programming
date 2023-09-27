#include "ain.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list to print
 *
 * @return:the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);

}
