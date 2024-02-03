#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_list -  a function that prints all the elements.
  * @h: arrgument
  * Return: number of node
  */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", current->len, current->str);

		count++;
		current = current->next;
	}
	return (count);
}
