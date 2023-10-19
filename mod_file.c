#include "monty.h"

/**
 * mod_nodes - computes the second top element of the stack by the top element
 * @head:stack head
 * @num: Interger that represents the line number of the opcode
 *
 * Return: Nothing
 */

void mod_nodes(stack_t **head, unsigned int num)
{
	int j;

	if (head == NULL || head == NULL || (*head)->next == NULL)
		more_err(8, num, "mod");

	if ((*head)->n == 0)
		more_err(9, num);
	(*head) = (*head)->next;
	j = (*head)->n % (*head)->prev->n;
	(*head)->n = j;
	free((*head)->prev);
	(*head)->prev = NULL;
}
