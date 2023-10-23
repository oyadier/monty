#include "monty.h"

/**
 * _character_print - prints the char at the top of the stack
 * @head: Pointe to top node of the stack
 * @count: counts the line number of of the opcode.
 */

void _character_print(stack_t **head, unsigned int count)
{
	int num;

	if (!head || !(*head))
	{
		printf("L%d: can't pchar, stack empty\n", count);
		free_nodes();
		exit(EXIT_FAILURE);
	}

	num = (*head)->n;
	if (num < 0 || num > 127)
	{
		printf("L%d: can't pchar, value out of range\n", count);
		free_nodes();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", num);
}
