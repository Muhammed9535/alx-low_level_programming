#include <stdio.h>
#include "dog.h"
/**
  * free_dog - a function that frees dogs.
  * @d: name
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
