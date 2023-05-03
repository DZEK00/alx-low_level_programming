#include "lists.h"

/**
* delete_nodeint_at_index - function that deletes the node
* at index index of a listint_t linked list
*
* @head: input
* @index: input
*
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *queue, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	queue = *head;
	if (index == 0)
	{
		*head = queue->next;
		free(queue);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (queue->next == NULL || queue == NULL)
			return (-1);
		queue = queue->next;
	}
	prev = queue->next;
	queue->next = prev->next;
	free(prev);
	return (1);
}
