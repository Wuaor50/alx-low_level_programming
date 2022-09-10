#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercaes
 * Return: 0 on success
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
	{
		putchar((num  % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
