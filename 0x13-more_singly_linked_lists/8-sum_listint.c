#include "lists.h"
/**
  * sum_listint - a function that returns the sum of all the data (n)
  * of a listint_t
  * @head : pointer to the head of list
  * Return: sum of the number in the list
  */
int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
