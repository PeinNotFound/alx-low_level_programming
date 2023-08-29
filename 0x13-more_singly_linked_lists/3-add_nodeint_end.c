#include "lists.h"

/**
 * add_nodeint_end - that adds a new node at the end of a listint_t list
 * @head: is the header of listint_t list
 * @n: is the integer to add to the new added node
 * Pein
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *origineHead = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = newNode;
	*head = origineHead;

	return (newNode);
}
