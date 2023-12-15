#include "monty.h"
/**
 * Add_node - add node to the head stack
 * @stack_head: head of the stack
 * @new_val:new val
 * Return:no return
 */
void Add_node(stack_t **stack_head, int new_val)
{
	stack_t *n_node, *aux;

	aux = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (aux)
		aux->prev = n_node;
	n_node->n = n;
	n_node->next = *stack_head;
	n_node->prev = NULL;
	*stack_head = n_node;
}
