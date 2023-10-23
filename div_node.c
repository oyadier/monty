#include "monty.h"
/**
 * _nodes_div - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void _nodes_div(stack_t **stack, unsigned int line_number)
{
	 int sum;

	if (!stack || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't %s, stack too short\n", line_number, "div");
		free_nodes();
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		free_nodes();
		exit(EXIT_FAILURE);
	}

	(*stack) = (*stack)->next;
	sum = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;

}
