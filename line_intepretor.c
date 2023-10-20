#include "monty.h"
/**
 * interpret_line - Separates each line into tokens to determine
 * which function to call.
 * @lineptr: String representing a line in a file.
 * @line_number: Line number for the opcode.
 * @format: Format specifier. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */
int interpret_line(char *lineptr, int line_number, int format)
{
	const char *delim;
	char *opcode;
	char *value;

	if (!lineptr)
	{
		printf("Error: malloc failed\n");
		free_nodes();
		exit(EXIT_FAILURE);
	}
	delim = "\n ";
	opcode = strtok(lineptr, delim);

	/*hanlding blank lines*/
	if (!opcode)
		return (format);
	value = strtok(NULL, delim);

	if (strcmp(opcode, "queue") == 0)
		return (1);
	else if (strcmp(opcode, "stack") == 0)
		return (0);

	find_func(opcode, value, line_number, format);
	return (format);
}
