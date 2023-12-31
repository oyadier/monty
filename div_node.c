#include "monty.h"

/**
 * _nodes_div - divides the second top element of the
 * stack by the top element of the stack
 * @head: stack head
 * @line_number: counts line numbers of the opcode
 *
 * Return: nothing
 */

void _nodes_div(stack_t **head, unsigned int line_number)
{
	 int j;

	if (!head || *head == NULL || (*head)->next == NULL)
	{
		printf("L%d: can't %s, stack too short\n", line_number, "div");

		free_nodes();
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		free_nodes();
		exit(EXIT_FAILURE);
	}

	(*head) = (*head)->next;
	j = (*head)->n / (*head)->prev->n;
	(*head)->n = j;
	free((*head)->prev);
	(*head)->prev = NULL;

}
