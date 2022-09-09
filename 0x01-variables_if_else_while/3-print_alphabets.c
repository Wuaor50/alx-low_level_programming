#include<stdio.h>

/**
 * main - Entry point
 *
 * descrption: Printing chr from a-z,A-Z
 * Return: 0 on Success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
