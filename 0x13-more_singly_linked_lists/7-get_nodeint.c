#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth
* node of a listint_t linked list
*
* @head: input
* @index: the index of the node, starting at 0
*
* Return: the node at the nth index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
