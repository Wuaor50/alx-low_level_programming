#include<main.h>
#include<stdlib>
/**
  * malloc_checked - function that allocates memory using malloc
  * @b: size of the memory
  *
  * Return: A void pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
