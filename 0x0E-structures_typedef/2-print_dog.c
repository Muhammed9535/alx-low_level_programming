#include <stdio.h>
#include "dog.h"
/**
  * print_dog - a function that prints a struct dog
  * @d: struct name
  * Return: Always 0
  */
void print_dog(struct dog *d)
{
	if (d ==  NULL)
		return;

	if (d->name == NULL)
		printf("nil");
	else
		printf("Name: %s", d->name);
	if (d->age == NULL)
		printf("nil");
	else
		printf("Age: %d", d->age);
	if (d->owner == NULL)
		printf("nil");
	else
		printf("Owner: %s", d->owner);
}

