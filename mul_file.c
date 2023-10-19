#include "monty.h"

/**
 * mul_nodes -multiplies two elements of the stack
 * @head: Pointer to top node of the stack
 * @num: Interger representing the line number of the opcode
 *
 * Return: void
 */

void mul_nodes(stack_t **head, unsigned int num)
{
	int sum;

	if (head == NULL || head == NULL || (*head)->next == NULL)
		more_err(8, num, "mul");

	(*head) = (*head)->next;
	sum = (*head)->n * (*head)->prev->n;
	(*head)->n = sum;
	free((head)->prev);
	(*head)->prev = NULL;
}
