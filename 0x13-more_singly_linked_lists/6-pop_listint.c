#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to pointer of the head of current linked list.
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
