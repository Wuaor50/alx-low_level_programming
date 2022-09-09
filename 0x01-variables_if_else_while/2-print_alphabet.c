#include<sdtio.h>

/**
 * main - Entry point
 *
 * Description: print lower case char from a -z
 * Return: o on Success
 */
int main(void)
{
	for (int ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar(\n);
	}
	return (0);
}
