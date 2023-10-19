#include "monty.h"

/**
 * rotl - Rotates the first node of the stack to the bottom
 * @head: stack head
 * @count: interger that represents the line number of opcode
 *
 * Return: void
 */

void rotl(stack_t **head, __attribute__((unused))unsigned int count)
{
	stack_t *tmp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
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
