#include "monty.h"

/**
 * add_to_queue - add  a node to the queue.
 * @new_node: Pointer to the new node.
 * @ln: Interger representing the line number of of the opcode.
 */
void add_to_queue(stack_t **new_node, __attribute__((unused))unsigned int ln)
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
        while (tmp->next != NULL)
                tmp = tmp->next;

        tmp->next = *new_node;
        (*new_node)->prev = tmp;
}
