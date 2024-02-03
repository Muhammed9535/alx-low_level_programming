#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
  * add_node_end - a function that adds a new node at the end of a list_t list
  * @head: a head
  * @str: string
  * Return: Address of the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *denode, *temp;
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}

	denode = malloc(sizeof(list_t));
	if (denode == NULL)
	{
		return (NULL);
	}
	denode->str = strdup(str);
	if (denode->str == NULL)
	{
		free(denode);
		return (NULL);
	}
	denode->len = len;
	denode->next = NULL;
	if (*head == NULL)
	{
		*head = denode;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = denode;
	return (*head);
}
