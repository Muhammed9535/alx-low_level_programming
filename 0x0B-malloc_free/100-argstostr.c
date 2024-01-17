#include "main.h"
#include <stdlib.h>
/**
  * argstostr -  a function that concatenates all the arguments of
  * your program.
  * @ac: argument count
  * @av: pointer to string
  * Return: pointer to the stirng
  */
char *argstostr(int ac, char **av)
{
	int i, j, index, size = ac;
	char *array;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	array = malloc(sizeof(int) * size + 1);

	if (array == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			array[index++] = av[i][j];
		}
		array[index++] = '\n';
	}
	array[size] = '\0';
	return (array);
}

