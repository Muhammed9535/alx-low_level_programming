#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list
  * @head: pointer to address
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;

		free(current);

		current = next;
	}
	*head = NULL;
}
