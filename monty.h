#ifndef __MONTY__H
#define __MONTY__H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
/*The needed operation in terms of with Math*/
void _nodes_sub(stack_t **, unsigned int);
void _nodes_div(stack_t **, unsigned int);
void _node_add(stack_t **, unsigned int);
void _nodes_mul(stack_t **, unsigned int);
void _nodes_mul(stack_t **, unsigned int);
/*Type for opcode functions*/
typedef void (*op_func)(stack_t **, unsigned int);

/*File operations*/
void read_file(FILE *);
int len_chars(FILE *);
int interpret_line(char *, int, int);
void open_file(char *);
void find_func(char *, char *, int, int);
/*Error hanlding*/
/*void err(int error_code, ...);*/
/*void more_err(int error_code, ...);*/
/*void string_err(int error_code, ...);*/
void _rotate_lnode(stack_t **, unsigned int);
/*Stack operations*/
void call_fun(op_func, char *, char *, int, int);
void _top_print(stack_t **, unsigned int);
void _top_pop(stack_t **, unsigned int);
stack_t *create_node(int n);
void free_nodes(void);
void _nop(stack_t **, unsigned int);

/*void _stack_print(stack_t **stac, unsigned int);*/
void _stack_print(stack_t **stack, __attribute__((unused)) unsigned int count);
void _stk_add(stack_t **, unsigned int);
void add_to_queue(stack_t **, unsigned int);

void _node_swap(stack_t **, unsigned int);

/*String operations*/
void _character_print(stack_t **, unsigned int);
void _string_print(stack_t **, unsigned int);
void _rotate_fnode(stack_t **, unsigned int);
/*Math operations with nodes*/
void _node_add(stack_t **, unsigned int);
void _nodes_sub(stack_t **, unsigned int);
void _nodes_div(stack_t **, unsigned int);
void _nodes_mul(stack_t **head, unsigned int num);
void _nodes_mod(stack_t **head, unsigned int num);

/*Error hanlding*/
/*void err(int error_code, ...);*/
/*void more_err(int error_code, ...);*/
/*void string_err(int error_code, ...);*/
void _rotate_lnode(stack_t **stack, __attribute__((unused))unsigned int count);

#endif /*__MONTY__H*/
