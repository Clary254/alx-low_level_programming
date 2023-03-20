#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: double pointer to head of node
 * @n: node data
 * Return: a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp_node = NULL, *nw_node = NULL;

	if (head == NULL)
	return (NULL);

	nw_node = malloc(sizeof(dlistint_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->n = n;
	nw_node->prev = NULL;

	temp_node = *head;
	*head = nw_node;
	nw_node->next = temp_node;

	if (temp_node != NULL)
		temp_node->prev = *head;

	return (nw_node);
}
