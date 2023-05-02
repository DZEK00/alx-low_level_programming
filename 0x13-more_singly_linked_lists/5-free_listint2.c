#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
*
* @head: input
*/

void free_listint2(listint_t **head)
{
	listint_t *queue;

	while (*head != NULL)
	{
		queue = *head;
		*head = NULL;
		free(queue);
	}
}
