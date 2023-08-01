#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to a struct
 *
 * Return: Address of the node where loop starts or NULL else
 * 
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f = head;
	listint_t *s = head;

	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (s == f)
		{
			s = head;
			while (f != s)
			{
				f = f->next;
				s = s->next;
			}
			return (s);
		}
	}
	return (NULL);
}

