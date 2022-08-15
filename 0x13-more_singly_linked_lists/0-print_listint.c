#include "lists.h"

/**
 * print_listint - t prints all the elements of a listint_t list.
 * @h: listint_s type.
 * Description:  a function that prints all the elements of a listint_t list.
 * Return: int type. The number of nodes.
 **/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size += 1;
		h = h->next;
	}
	return (size);
}
