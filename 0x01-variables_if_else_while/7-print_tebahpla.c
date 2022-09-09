#include<stdio.h>

/**
 * main - Entry point
 *
 * Descrption:  prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
