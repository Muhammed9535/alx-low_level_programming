#include <stdio.h>
/**
  * main - prints all possible combinations of two two-digit numbers
  * Description: prints all possible combinations of two two-digit numbers.
  * The numbers should range from 0 to 99
  * the two numbers should be separated by a space
  * Return: zero
  */
int main(void)
{

	int i, j, k, l, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 1; l <= 9; l++)
				{
					x = i + j + k + l;
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (x < 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
