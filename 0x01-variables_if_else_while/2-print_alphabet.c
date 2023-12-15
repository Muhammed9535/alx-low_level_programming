#include <stdio.h>
/**
  * main - print out lower case
  * Description: a program that prints the alphabet in lowercase
  * using only putchar funtion twice
  * Return: Always 0
  */
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
