#include "monty.h"

/**
 * print_char - prints the char at the top of the stack
 * @head: Pointe to top node of the stack
 * @count: counts the line number of of the opcode.
 */

void print_char(stack_t **head, unsigned int count)
{
	int num;

	if (head == NULL || *head == NULL)
		string_err(11, count);

	num = (*head)->n;
	if (num < 0 || num > 127)
		string_err(10, count);
	printf("%c\n", num);
}
