#include "lists.h"


/**
  * print_listint - a function that prints all the elements of a listint_t list
  * @h: argument
  * Return: number of node
  */
size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
