#include "monty.h"

/**
 * print_top - Prints the top node of the stack
 * @stack: Pointer to top node of the stack
 * @line_number: counts the line number of the opcode
 *
 * Return: No return
 */

void print_top(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		printf("L%d: can't pint, stack empty\n", line_number);
  
	printf("%d\n", (*stack)->n);
}
