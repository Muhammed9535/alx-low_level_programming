#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * add_node - a function that adds a new node at the beginning
  * @head: address of the list
  * @str: string
  * Return: node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Anode;
	int len;

	len = 0;
	while (str[len])
		len++;

	Anode = malloc(sizeof(list_t));
	if (Anode == NULL)
		return (NULL);
	Anode->str = strdup(str);
	if (Anode->str == NULL)
	{
		free(Anode->str);
		return (NULL);
	}
	Anode->next = *head;
	*head = Anode;
	Anode->len = len;
	return (Anode);
}
