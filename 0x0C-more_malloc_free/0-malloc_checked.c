#include<main.h>
/**
  * malloc_checked - function that allocates memory using malloc
  * @b: size of the memory
  *
  * Return: A void pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;
	unsigned int a = 98;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		ptr = &a;
		return (ptr);
	}
	else
		return (ptr);
}
