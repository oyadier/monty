#include "monty.h"

/**
 * _nodes_mod - computes the second top element of the stack by the top element
 * @head:stack head
 * @num: Interger that represents the line number of the opcode
 *
 * Return: Nothing
 */

void _nodes_mod(stack_t **head, unsigned int num)
{
	int j;

	if (head == NULL || head == NULL || (*head)->next == NULL)
	{
		printf("L%d: can't %s, stack too short\n", num, "mod");
		free_nodes();
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		printf("L%d: division by zero\n", num);
		free_nodes();
		exit(EXIT_FAILURE);
	}
	(*head) = (*head)->next;
	j = (*head)->n % (*head)->prev->n;
	(*head)->n = j;
	free((*head)->prev);
	(*head)->prev = NULL;
}
