#include "main.h"
/**
  * _putchar - print char
  * @c: char to be printed
  *
  * Return: number of char written
  */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
