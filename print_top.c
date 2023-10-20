#include "monty.h"

/**
 * print_top - Prints the top node of the stack
 * @head: Pointer to top node of the stack
 * @count: counts the line number of the opcode
 *
 * Return: No return
 */

void print_top(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		more_err(6, line_number);
	printf("%d\n", (*stack)->n);
}
