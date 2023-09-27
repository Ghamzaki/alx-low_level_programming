#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list
 * @n: value to be stored in the new node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
