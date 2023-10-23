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

	if (!stack || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't sup, stack too short\n", line_number);
		free_nodes();
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	sum = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
