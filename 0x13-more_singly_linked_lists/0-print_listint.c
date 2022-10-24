#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint (const listint_t *h)
{
	if (h == NULL)
	{
		return (1);
	}
	else
	{
		while (h->next != NULL)
		{
			printf("%lu\n", h->n);
			h = h->next;
		}
		printf("%lu\n", h->n);
	}
}
