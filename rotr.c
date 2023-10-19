#include "monty.h"

/**
 * rotr - Rotates the last node of the stack to the top
 * @stack: Pointer to a pointer pointing to top node of the stack
 * @count: represents the line number of the opcode
 *
 * Return: nothing
 */

void rotr(stack_t **stack, __attribute__((unused))unsigned int count)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

	tmp = *stack;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*stack)->prev = tmp;
	(*stack) = tmp;
}