#include "lists.h"

/**
 * listint_len - returns the numbers elements included in a list that is linked
 * @head: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t num = 0;

	while (head)
	{
		num++;
		head = head->next;
	}
	return (num);
}
