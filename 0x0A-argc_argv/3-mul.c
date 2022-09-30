#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 *
 * @argv: argument array
 *
 * Return: If the program receives two arguments - 0
 * If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc > 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;

		printf("%d\n", mul);

	return (0);
	}
	else
		printf("Error\n");

	return (1);
}



