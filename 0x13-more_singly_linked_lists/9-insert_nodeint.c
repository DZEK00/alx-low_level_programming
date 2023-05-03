#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node at a given position
*
* @head: input
* @idx: input
* @n: input
*
* Return: the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *queue;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
        	if (new_node == NULL)
            		return NULL;

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	queue = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if  (queue == NULL)
		{
			free(new_node);
			return (NULL);
		}
		queue = queue->next;
	}
	new_node->next = queue->next;
	queue->next = new_node;
	return (new_node);
}	
