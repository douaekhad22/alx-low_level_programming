#include "lists.h"
#include <stddef.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_listint - prints a singly linked list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		_putchar(h->n + '0');
		_putchar('\n');
		h = h->next;
		size++;
	}
	return size;
}
