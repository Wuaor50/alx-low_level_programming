#include <stdlib.h>
#include "lists.h"
/**
  * add_dnodeint - function that adds a new node at the beginning of a list
  * @head: head pointer
  * @n: integer value
  *
  * Return: Address of the new element
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return NULL;
	}
	if (*head == NULL)
	{
		return  NULL;
	}
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	(*head)->prev = temp;
	temp->prev = NULL;
	*head = temp;
	return (temp);
}
