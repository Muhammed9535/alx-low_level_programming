#include <stdio.h>
/**
  * main - prints all the numbers of base 16 in lowercase
  * Description: prints all the numbers of base 16 in lowercase
  * using putchar funtion
  * Return: 0
  */
int main(void)
{
	int i, j;

	i = '0';
	j = 'a';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

