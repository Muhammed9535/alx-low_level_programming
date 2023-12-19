#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - a function that prints all natural numbers from n to 98,
  * followed by a new line.
  * @n: character to check
  * Return: void
  */
void print_to_98(int n)
{
	int j;

	j = n;
	if (n <= 98)
	{
		for (n = j; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	else
	{
		for (n = j; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	printf("\n");
}
