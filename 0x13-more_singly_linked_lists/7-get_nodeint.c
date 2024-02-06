#include "lists.h"


/**
  * get_nodeint_at_index - a function that returns the nth node of a listint_t
  * @head: pointer to head listint_int
  * @index: index of value
  * Return: NULL, if node does not exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
