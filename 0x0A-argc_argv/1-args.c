#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: arument array
 *
 * Return:0
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
