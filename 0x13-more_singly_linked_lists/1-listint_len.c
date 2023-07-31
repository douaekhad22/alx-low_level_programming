#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements (nodes) in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t nnodes = 0; // Initialize a variable to keep track of the number of nodes.

    while (h != NULL)
    {
        h = h->next; // Move the pointer h to the next node.
        nnodes++;    // Increment the count for each node in the list.
    }

    return nnodes; // Return the final count, representing the number of nodes in the list.
}


