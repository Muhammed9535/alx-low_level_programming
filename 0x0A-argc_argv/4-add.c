#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: If one of the number contains symbols that are not digits
 * return 1
 *
 * if all are numbers return 0
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
