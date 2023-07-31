#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NULL else.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newl;
	listint_t *temp;

	(void)temp;

	newl = malloc(sizeof(listint_t));

	if (newl == NULL)
		return (NULL);

	newl->n = n;
	newl->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = newl;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newl;
	}

	return (*head);
}

