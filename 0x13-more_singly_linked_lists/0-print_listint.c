#include "lists.h"

/**
* print_listint - a function that prints all the
* elements of a listint_t list.
*
* @h: input
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 1;
	const listint_t *queue = h;

	if (queue == NULL)
		return (0);

	while (queue->next != NULL)
	{
		printf("%d\n", queue->n);
		count++;
		queue = queue->next;
	}
	printf("%d\n", queue->n);
	return (count);
}
