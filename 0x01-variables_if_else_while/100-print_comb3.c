#include<stdio.h>

/**
 * main - Entry point
 *
 * description: prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int n = 1;

	for (i = 0; i < 9; i++)
	{
		for (j = n; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
