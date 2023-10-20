#include "monty.h"

/**
 * _rotate_fnode - Rotates the first node of the stack to the bottom
 * @head: stack head
 * @count: interger that represents the line number of opcode
 *
 * Return: void
 */

void _rotate_fnode(stack_t **head, __attribute__((unused))unsigned int count)
{
	stack_t *tmp;

	if (!head || !(*head) || !((*head)->next))
		return;

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *head;
	(*head)->prev = tmp;
	*head = (*head)->next;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;
}
