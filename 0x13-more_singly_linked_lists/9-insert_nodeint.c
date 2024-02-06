#include "lists.h"
/**
  * insert_nodeint_at_index - a function that inserts a new node
  * at a given position.
  * @head: pointer to the head
  * @idx: index at which to place the node
  * @n: value to place at the node
  * Return: number of node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode, *current;
	unsigned int i = 0;
	unsigned int count = 0;

	temp = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		newnode = malloc(sizeof(listint_t));
		current = *head;
		while (i < (idx - 1))
		{
			current =  current->next;
			i++;
		}
		newnode->n = n;
		newnode->next = current->next;
		current->next = newnode;
	}
	return (newnode);
}
