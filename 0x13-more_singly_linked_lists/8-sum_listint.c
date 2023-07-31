#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int somme;

	somme = 0;
	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}

	return (somme);
}

