#include "lists.h"

/**
* pop_listint - function that deletes the head node of a
* listint_t linked list
*
* @head: input
*
* Return:  the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *queue;
	int n;

	if (*head == NULL)
		return (0);

	queue = *head;
	*head = (*head)->next;
	n = queue->n;
	free(queue);

	return (n);
}
