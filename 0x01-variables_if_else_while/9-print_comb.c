#include <stdio.h>
/**
  * main - prints all possible combinations of single-digit numbers.
  * Description: prints all possible combinations of single-digit numbers.
  * using printf function
  * Return: 0
  */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
