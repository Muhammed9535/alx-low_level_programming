#include <stdio.h>
/**
  * main -  prints all possible different combinations of two digits
  * Description: Write a program that prints all possible different
  * combinations of two digits separated by , followed by a space
* Return: 0
*/
int main(void)
{
	int i, j, c;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (c < 15)
			{
				c = i + j;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

