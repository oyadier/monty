#include "monty.h"

/**
 * _stk_add - adds a node to the stack
 * @new_node: new node
 * @j: ine number
 *
 * Return: nothing
 */

void _stk_add(stack_t **new_node, __attribute__((unused))unsigned int j)
{
	stack_t *tmp;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new_node;
		return;
	}
	tmp = head;
	head = *new_node;
	head->next = tmp;
	tmp->prev = head;
}
