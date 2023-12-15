#include "monty.h"
/**
 * Free_Stack - frees a doubly linked list
 * @stack_head: head of the stack
 */
void Free_Stack(stack_t *stack_head)
{
	stack_t *aux;

	aux = stack_head;
	while (stack_head)
	{
		aux = stack_head->next;
		free(stack_head);
		stack_head = aux;
	}
}
