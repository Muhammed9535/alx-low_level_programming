#include <stdio.h>
/**
  * main - prints all possible different combinations of three digits.
  * Description: prints all possible different combinations of three digits
  * Numbers must be separated by ,, followed by a space
  * Return: 0
  */
int main(void)
{
	int i, j, k, x;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (i != j && i != k && j != k)
				{
					x = i + j + k;
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (x < 24)
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
