#include "monty.h"

/**
 * print_top - Prints the top node of the stack
 * @head: Pointer to top node of the stack
 * @count: counts the line number of the opcode
 *
 * Return: No return
 */

void print_top(stack_t **head, unsigned int count)
{
	if (head == NULL || *head == NULL)
		more_err(6, count);
	printf("%d\n", (*head)->n);
}
