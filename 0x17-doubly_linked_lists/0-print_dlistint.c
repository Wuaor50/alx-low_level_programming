#include <stdio.h>
/**
  * print_dlistint -  function that prints all the elements of a list
  * @h: head pointer
  *
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	temp = h;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
