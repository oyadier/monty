#include "monty.h"
/**
 * _top_pop - remove(pop) the top node
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void _top_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		free_nodes();
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
