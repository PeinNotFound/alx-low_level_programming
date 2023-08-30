#include "lists.h"

/**
 * pop_listint - instruction that Deletes the head node of a listint_t linked list
 * @head :is the header of listint_t list
 *
 * Return: The head node's data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int headNodeData;
	listint_t *secondNode;

	if (*head == NULL)
		return (0);

	headNodeData = (*head)->n;
	secondNode = (*head)->next;
	free(*head);
	(*head) = secondNode;

	return (headNodeData);
}
