#include <stdio.h>
#include <stdlib.h>
/**
  * main -  a program that multiplies two numbers.
  * @argc: argument count
  * @argv: pointer to character
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
