#include "lists.h"
#include <stdio.h>

/**
  * free_list -  a function that frees a list_t list.
  * @head: argument
  */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;

		free(current->str);
		free(current);

		current = next;
	}
}
