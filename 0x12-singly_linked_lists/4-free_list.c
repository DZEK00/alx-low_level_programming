#include "lists.h"

/**
* free_list - a function that frees a list_t list.
*
* @head: input
*/

void free_list(list_t *head)
{
	list_t *queue;

	while (head != NULL)
	{
		queue = head;
		head = head->next;
		free(queue->str);
		free(queue);
	}
}
