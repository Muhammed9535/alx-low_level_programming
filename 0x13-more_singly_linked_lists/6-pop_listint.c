#include "lists.h"
/**
  * pop_listint - a function that deletes the head node of a listint_t
  * @head: pionter to address
  * Return: the valuee of the node deleted
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);
	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (ret);
}
