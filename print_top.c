#include "monty.h"

/**
 * _top_print - Prints the top node of the stack
 * @stack: Pointer to top node of the stack
 * @line_number: counts the line number of the opcode
 *
 * Return: No return
 */

void _top_print(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		free_nodes();
		exit(EXIT_FAILURE);
	}
  
	printf("%d\n", (*stack)->n);
}
