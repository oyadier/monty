#include "monty.h"

/**
 * interpret_line - Separates each line into tokens
 * @lineptr: String representing a line in a file
 * @num: line number for the opcode
 * @format: format specifier
 *
 * Return: Returns 0 if the opcode is stack 1 if queue
 */

int interpret_line(char *lineptr, int num, int format)
{
	const char *delim;
	char *op_code;
	char *val;

	if (!lineptr)
	{
		printf("Error: malloc failed\n");
		free_nodes();
		exit(EXIT_FAILURE);
	}
	delim = "\n ";
	op_code = strtok(lineptr, delim);

	if (!op_code)
		return (format);
	val = strtok(NULL, delim);

	if (strcmp(op_code, "queue") == 0)
		return (1);
	else if (strcmp(op_code, "stack") == 0)
		return (0);

	find_func(op_code, val, num, format);
	return (format);
}
