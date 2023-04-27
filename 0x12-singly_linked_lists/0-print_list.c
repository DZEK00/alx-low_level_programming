#include "lists.h"
#include "stdio.h"

/**
* print_list - prints all the elements of a list_t list.
*
* @h: input
*
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 1;
	const list_t *queue = h;

	if (queue == NULL)
		return (0);

	while (queue->next != NULL)
	{
		if (queue->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", queue->len, queue->str);

		count++;
		queue = queue->next;
	}
	printf("[%d] %s\n", queue->len, queue->str);

	return (count);
}
