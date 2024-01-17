#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program that adds positive numbers
  * @argc: argument count
  * @argv: pointer to string
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, sum, digit;
	
	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (digit = 0; argv[i][digit]; digit++)
			{
				if (argv[i][digit] < '0' || argv[i][digit] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
