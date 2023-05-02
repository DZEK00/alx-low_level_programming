#include "lists.h"

/**
* free_listint - function that frees a listint_t list.
*
* @head: input
*/

void free_listint(listint_t *head)
{
	listint_t *queue;

	while (head != NULL)
	{
		queue = head;
		head = head->next;
		free(queue);
	}
}
