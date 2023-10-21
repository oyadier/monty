#include "monty.h"

/**
 * _nodes_sub - subtraction
 * @stack: stack head
 * @line_number: represents the line number of the opcode
 *
 * Return: void
 */

void _nodes_sub(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (!stack || !(*stack) || !((*stack)->next))
	{
		printf("L%d: can't %s, stack too short\n", line_number, "sub");
		free_nodes();
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	sum = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
