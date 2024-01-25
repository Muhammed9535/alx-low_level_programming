#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - a function that print a name
  * @name: the person's name
  * @f : funtion pointer
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
