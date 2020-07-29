#include "lists.h"
#include <stdlib.h>
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
	listint_t *current_node;

	current_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = number;

	while (current_node && current_node->next &&
		current_node->next->n < new_node->n)
		current_node = current_node->next;
	if (!current_node || new_node->n < current_node->n)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
	}
	return (new_node);
}
