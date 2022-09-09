#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print lower case char from a -z
 * Return: o on Success
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
