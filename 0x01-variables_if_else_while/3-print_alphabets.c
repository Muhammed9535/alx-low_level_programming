#include <stdio.h>
/**
  * main - prints the alphabet in lowercase, and then in uppercase
  * Description: prints the alphabet in lowercase, and then in uppercase
  * using putchar only thrice
  * Return: Always zero
  */
int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
