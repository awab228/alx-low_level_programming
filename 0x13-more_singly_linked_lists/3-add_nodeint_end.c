#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list.
 * @head: pointer to pointer of the head of the current list.
 * @n: data to insert in the new element.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp_list = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp_list->next)
		temp_list = temp_list->next;

	temp_list->next = new;

	return (new);
}
