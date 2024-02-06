#include "lists.h"

/**
  * free_listint - a function that frees a listint_t list.
  * @head: pionter to the head
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *next, *current;

	current = head;
	while (current != NULL)
	{
		next = current->next;

		free(current);
		current = next;
	}
}
