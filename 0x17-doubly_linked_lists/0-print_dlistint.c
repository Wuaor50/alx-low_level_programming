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
	dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
