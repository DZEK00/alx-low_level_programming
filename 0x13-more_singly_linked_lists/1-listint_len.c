#include "lists.h"

/**
* listint_len - function that returns the number
* of elements in a linked listint_t list.
*
* @h: input
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 1;
	const listint_t *queue = h;

	while (queue->next != NULL)
	{
		len++;
		queue = queue->next;
	}
	return (len);
}
