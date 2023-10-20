#include "monty.h"

/**
 * _stack_print - prints a node to the stack
 * @stack: Pointer pointing to top node of the stack
 * @count: interger that represents the line number of opcode
 *
 * Return: Nothing
 */

void _stack_print(stack_t **stack, __attribute__((unused))unsigned int count)
{
	stack_t *len;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	len = *stack;
	while (len != NULL)
	{
		printf("%d\n", len->n);
		len = len->next;
	}
}
