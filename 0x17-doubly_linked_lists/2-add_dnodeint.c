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

	temp = (dlistint_t *)malloc(sizeof(dlistint_t));
	temp->n = n;
	temp->next = *head;
	*head->prev = temp;
	*head = temp;
	return (*head);
}
