#include "monty.h"

/**
 * find_func - this function finds the appropite function
 * to run the opcode instructions
 * @opcode: the operation code
 * @value: possible value for the operation
 * @ln: line number for the opcode
 * @format: Format specifier
 * Return: void
 */
void find_func(char *opcode, char *value, int ln, int format)
{
	int k;
	int tmp;

	instruction_t func_list[] = {
		{"push", _stk_add},
		{"pall", _stack_print},
		{"pint", _top_print},
		{"pop", _top_pop},
		{"_nop", _nop},
		{"swap", _node_swap},
		{"add", _node_add},
		{"sub", _nodes_sub},
		{"div", _nodes_div},
		{"mul", _nodes_mul},
		{"mod", _nodes_mod},
		{"pchar", _character_print},
		{"pstr", _string_print},
		{"_rotate_fnode", _rotate_fnode},
		{"_rotate_lnode", _rotate_lnode},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;

	for (tmp = 1, k = 0; func_list[k].opcode != NULL; k++)
	{
		if (strcmp(opcode, func_list[k].opcode) == 0)
		{
			call_fun(func_list[k].f, opcode, value, ln, format);
			tmp = 0;
		}
	}
	if (tmp == 1)
	{
		printf("L%d: unknown instruction %s\n", ln, opcode);
		free_nodes();
		exit(EXIT_FAILURE);
	}
}
