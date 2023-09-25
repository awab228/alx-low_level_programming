#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: Head of the linked list.
 *
 * Return: Number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}

	return (elements);
}
