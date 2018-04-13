#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a dlistint_t list
 * @head: list
 * @n: new node to add
 *
 * Return: address of new node, or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}