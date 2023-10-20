#include "monty.h"
/**
 * div_nodes - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void div_nodes(stack_t **stack, unsigned int line_number)
{
	 int sum;

	if (!stack || !(*stack) || !((*stack)->next))
		/*8*/
		printf("L%d: can't %s, stack too short\n", line_number, "div");

	if ((*stack)->n == 0)
		printf("L%d: division by zero\n", line_number);
	(*stack) = (*stack)->next;
	sum = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;

}
