#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int a = 1;
	int b = 2;

	for (i = 0; i < 8; i++)
	{
		for (j = a; j < 9; j++)
		{
			for (k = b; k < 9; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
