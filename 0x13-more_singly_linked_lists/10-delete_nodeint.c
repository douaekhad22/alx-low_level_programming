#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a listint_t linked list.
 *
 * @head:  pointer to a head of a list.
 * @index: position of node to delete.
 *
 * Return: 1  else -1 on fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *node, *pre;

	if (!(*head))
		return (-1);
	j = 0;
	pre = NULL;
	node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (j == index)
		{
			pre->next = node->next;
			free(node);
			return (1);
		}
		pre = node;
		node = node->next;
		j++;
	}

	return (-1);
}

