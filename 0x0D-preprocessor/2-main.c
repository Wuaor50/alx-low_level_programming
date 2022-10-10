#include <main.h
/**
  * main - prints name of the file it was compiled from
  *
  * Return: Always 0
  */
int main(void)
{
	int i = 0;
	int j = 0;

	while (*(__FILE__ + i))
		i++;
	while (j < i)
	{
		_putchar(*(__FILE__ + j));
		j++;
	}
	_putchar('\n');
	return (0);
}
