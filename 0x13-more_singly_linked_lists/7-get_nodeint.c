#include "lists.h"

/**
 * get_nodeint_at_index - returns a pointer of a nth node.
 * @head: pointer to a head of a list.
 * @index: node index
 *
 * Return: pointer to a node, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nnode;

	if (!head)
		return (NULL);

	nnode = head;
	while (i < index)
	{
		if (!nnode)
			return (NULL);
		nnode = nnode->next;
		i++;
	}
	return (nnode);
}

