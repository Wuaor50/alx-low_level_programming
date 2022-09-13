#include "main.h"

/**
 * main - Entrance point
 *
 * Descrption:print Putchar
 * Return/; 0 on success
 */
int main(void)
{
	char array[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(array[i]);
		putchar('\n');
	}
	return (0);
}
