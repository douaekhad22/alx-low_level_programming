#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to head of a list.
 *
 * Return: Length of list (INT)
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s = head ,*f = head;
	size_t ele = 0;
	int is_loop = 0;

	while (s && f && f->next)
	{
		if (!(f->next->next))
			break;
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			s = s->next;
			is_loop = 1;
			break;
		}
	}

	if (!is_loop)
	{
		while (head)
		{
			ele++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (ele);
	}

	while (head)
	{
		ele++;
		if (head == s)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}

