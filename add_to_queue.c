#include "monty.h"

/**
 * add_to_queue - adds a node to the queue
 * @new_node: Pointer to the new node
 * @j: represents the line number of of the opcode
 *
 * Return: void
 */

void add_to_queue(stack_t **new_node, __attribute__((unused))unsigned int j)
{
	stack_t *tmp;

	if (!new_node || !(*new_node))
		exit(EXIT_FAILURE);
	if (!head)
	{
		head = *new_node;
		return;
	}
	tmp = head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = *new_node;
	(*new_node)->prev = tmp;
}
