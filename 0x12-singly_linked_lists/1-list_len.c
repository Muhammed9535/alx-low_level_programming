#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  * list_len - a function that returns the number of elements in a linked
  * @h: argument
  * Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
