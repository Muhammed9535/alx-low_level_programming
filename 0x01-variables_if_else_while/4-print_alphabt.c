#include <stdio.h>
/**
  * main - a program that prints the alphabet in lowercase
  * Description: a program that prints the alphabet in lowercase
  * letters except q and e using putchar fuction only
  * Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i == 'q') || (i == 'e'))
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
