#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print chr a-z except q and e
 * Return: 0 on Success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
