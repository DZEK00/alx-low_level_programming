#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at an index
 * @head: pointer to the head of the list
 * @index: index at which to delete node
 *
 * Return: 1 (success) -1(failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *a, *b;

	if (head == NULL || *head == NULL)
		return (-1);
	a = *head;
	if (index == 0)
	{
		*head = a->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(a);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (a == NULL)
			return (-1);
		b = a;
		a = a->next;
	}
	b->next = a->next;
	if (a->next != NULL)
		a->next->prev = b;
	free(a);
	return (1);
}
