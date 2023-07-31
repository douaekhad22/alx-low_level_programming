#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: head of a list.
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

