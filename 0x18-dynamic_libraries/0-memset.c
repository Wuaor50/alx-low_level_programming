#include "main.h"

/**
  * *_memset - function that fills memory with a constant byte
  * @s: buffer
  * @b: constant varaible to be written in the buffer
  * @n: size
  *
  * Description: function fills the first n bytes of the memory
  * area pointed to by s with the constant byte b
  * Return: Return a pointer
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
