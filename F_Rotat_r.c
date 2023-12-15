#include "monty.h"
/**
 * F_Rotat_r - rotates the stack to the botton
 * @stack_head: stack head
 * @cnt: lie number
 * Return: no return
 */
void F_Rotat_r(stack_t **stack_head, __attribute__((unused)) unsigned int cnt)
{
	stack_t *cpy;

	cpy = *stack_head;
	if (*stack_head == NULL || (*stack_head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *stack_head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*stack_head)->prev = cpy;
	(*stack_head) = cpy;
}
