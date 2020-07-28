#include "lists.h"
/**
 * insert_node -  inserts a number into a sorted singly linked list.
 * @head:  pointer to head of list
 * @number:  new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *currrent_node;

	currrent_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = number;

	if ((*head == NULL) || new_node->n <= (*head)->n)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while ((currrent_node->next != NULL) &&
			currrent_node->next->n < new_node->n)
		{
			currrent_node = currrent_node->next;
		}
		new_node->next = currrent_node->next;
		currrent_node->next = new_node;
		return (new_node);
	}
	return (NULL);
}
