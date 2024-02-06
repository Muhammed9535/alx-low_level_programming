#include "lists.h"

/**
  * delete_nodeint_at_index -  a function that deletes the node at index index
  * @head: pointer to head of listint_t
  * @index: index to delete at
  * Return: 1 if succeeded -1 if failed;
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *newnode;
	unsigned int i = 0;

	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i <= (index - 1))
	{
		temp = temp->next;
		i++;
	}
	newnode = temp->next;
	temp->next = newnode->next;
	free(newnode);
	return (1);
}
