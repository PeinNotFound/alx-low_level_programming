#include "lists.h"

/**
 * add_nodeint - it adds a new node at the beginning of a listint_t list
 * @head: is the header of listint_t list
 * @n :is the integer to add to the new added node
 *
 * Return: is the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
