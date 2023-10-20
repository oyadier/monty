#include "monty.h"

/**
 * print_char - prints the char at the top of the stack
 * @head: Pointe to top node of the stack
 * @count: counts the line number of of the opcode.
 */

void print_char(stack_t **head, unsigned int count)
{
	int num;

	if (!head|| !(*head))
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
