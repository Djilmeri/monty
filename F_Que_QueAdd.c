#include "monty.h"
/**
 * F_Que - prints the top
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void F_Que(stack_t **stack_head, unsigned int cnt)
{
	(void)stack_head;
	(void)cnt;
	bus.lifi = 1;
}
/**
 * Queue_Add - Add node to the tail stack
 * @new_val: new value
 * @stack_head: head of the stack
 * Return: no stack
 */
void Queue_Add(stack_t **stack_head, unsigned int new_val)
{
	stack_t *n_node, *aux;

	aux = *stack_head;
	n_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*stack_head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		aux->next = n_node;
		n_node->prev = aux;
	}
}
