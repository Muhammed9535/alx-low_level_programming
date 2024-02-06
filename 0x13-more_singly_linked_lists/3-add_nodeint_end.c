#include "lists.h"
/**
  * add_nodeint_end - a function that adds a new node at the end
  * @head: pointer to head
  * @n: value
  * Return: address of element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = NULL;
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newnode;
	return (*head);
}
