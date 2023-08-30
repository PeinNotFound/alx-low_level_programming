#include "lists.h"
/**
 * sum_listint - instruction that calculates the sum of all the data (n)
 * of a listint_t linked list
 * @head: is the head of tje listint_t list
 *
 * Return: is the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
