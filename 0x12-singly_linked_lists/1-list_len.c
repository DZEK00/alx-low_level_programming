#include "lists.h"

/**
* list_len - a function that returns the number
* of elements in a linked list_t list.
*
* @h: input
*
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t count = 1;
	const list_t *queue = h;

	if (queue == NULL)
		return (0);

	while (queue->next != NULL)
	{
		count++;
		queue = queue->next;
	}
	return (count);
}
