#include <stdio.h>
/**
  * main -  a program that prints all arguments it receives.
  * @argc: argument count
  * @argv: pointer to character
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
