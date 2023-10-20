#include "monty.h"

/**
 * _string_print - Prints a string
 * @head: Pointer to top node of the stack
 * @num: counts the line number of the opcode
 *
 * Return: no return
 */
void _string_print(stack_t **head, __attribute__((unused))unsigned int num)
{
	int len;
	stack_t *tmp;

	if (head == NULL || *head == NULL)
	{
		printf("\n");
		return;
	}

	tmp = *head;
	while (tmp != NULL)
	{
		len = tmp->n;
		if (len <= 0 || len > 127)
			break;
		printf("%c", len);
		tmp = tmp->next;
	}
	printf("\n");
}
