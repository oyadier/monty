#include "monty.h"
stack_t *head = NULL;

/**
 * main - entry Point of the program
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always Zero
 */

int main(int argc, char **argv)
{
	char *val = argv[1];

	if (argc < 2 || argc > 2)
	{
		printf("USAGE: monty file\n");
		free_nodes();
		exit(EXIT_FAILURE);
	}
	open_file(val);
	free_nodes();
	return (0);
}

/**
 * free_nodes - Frees nodes in the stack
 *
 * Return: nothing
 */
void free_nodes(void)
{
	stack_t *str;

	if (!head)
		return;

	while (head)
	{
		str = head;
		head = head->next;
		free(str);
	}
}

/**
 * create_node - Creates anddistributes nodes
 * @vex: number in a node
 *
 * Return: on sucess, a pointer to the node otherwise NULL
 */

stack_t *create_node(int vex)
{
	stack_t *s_node;

	s_node = malloc(sizeof(stack_t));
	if (!s_node)
	{
		printf("Error: malloc failed\n");
		free_nodes();
		exit(EXIT_FAILURE);
	}
	s_node->next = NULL;
	s_node->prev = NULL;
	s_node->n = vex;
	return (s_node);
}
