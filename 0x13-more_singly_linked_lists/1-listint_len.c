#include "lists.h"
/**
 * listint_len - Entry Point
 * @h: head
 * Return: number of elements in a linke
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
