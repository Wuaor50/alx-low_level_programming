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
		_putchar(array[i]);
	}
	_putchar('\n');
	return (0);
}
