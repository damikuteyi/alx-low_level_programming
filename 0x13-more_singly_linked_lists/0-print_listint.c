#include "lists.h"
/**
 * print_listint - print integer from a node
 * @h: linked list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)

{
	int num_nodes = 0;

	while (h != NULL)

	{

		printf("%d\n", h->n);

		num_nodes++;

		h = h->next;

	}

	return (num_nodes);
}
