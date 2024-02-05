#include "lists.h"

/**
  * listint_len - a function that returns the number of elements in a linked
  * @h: argument;
  * Return: number of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
