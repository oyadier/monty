#include "monty.h"

/**
 * call_fun - Calls the required function
 * @f: Pointer to the function
 * @str: opcode string
 * @val: string representing a numeric value
 * @num: line numeber for the instruction
 * @format: Format specifier
 * Return: void
 */
void call_fun(op_func f, char *str, char *val, int num, int format)
{
	stack_t *node;
	int tmp;
	int i;

	tmp = 1;
	if (strcmp(str, "push") == 0)
	{
		if (val  && val[0] == '-')
		{
			val = val + 1;
			tmp = -1;
		}
		if (!val)
		{
			printf("L%d: usage: push integer\n", num);
			free_nodes();
			exit(EXIT_FAILURE);
		}
		for (i = 0; val[i] != '\0'; i++)
		{
			if (isdigit(val[i]) == 0)
			{
				printf("L%d: usage: push integer\n", num);
				free_nodes();
				exit(EXIT_FAILURE);
			}
		}
		node = create_node(atoi(val) * tmp);
		if (format == 0)
			f(&node, num);
		if (format == 1)
			add_to_queue(&node, num);
	}
	else
		f(&head, num);
}
