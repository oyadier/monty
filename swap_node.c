#include "monty.h"

/**
 * _node_swap - Swaps the top two elements of the stack
 * @head: pointer pointing to top node of the stack
 * @num: line number of the opcode
 */

void _node_swap(stack_t **head, unsigned int num)
{
	stack_t *tmp;

	if (!stack || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		free_nodes();
		exit(EXIT_FAILURE);
	}
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *head;
	tmp->next = *head;
	(*head)->prev = tmp;
	tmp->prev = NULL;
	*head = tmp;
}
