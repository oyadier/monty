#include "monty.h"

/**
 * find_func - Finds the appropite function to run the opcode instructions.
 * @opcode: The operation code, It could be push, pall, ...
 * @value: The possible value for the operation.
 * @ln: Line number for the opcode.
 * @format: Format specifier. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 */
void find_func(char *opcode, char *value, int ln, int format)
{
	int i;
	int flag;

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
	/*Iterates through list to find the right function*/
	for (flag = 1, i = 0; func_list[i].opcode != NULL; i++)
	{
		/*When 0 found the right opcode*/
		if (strcmp(opcode, func_list[i].opcode) == 0)
		{
			call_fun(func_list[i].f, opcode, value, ln, format);
			flag = 0;
		}
	}
	if (flag == 1)
	{
		printf("L%d: unknown instruction %s\n", ln, opcode);
		free_nodes();
		exit(EXIT_FAILURE);
	}
}
