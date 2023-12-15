#include "monty.h"
/**
 * F_Rotat - rotates the stack to the top
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void F_Rotat(stack_t **stack_head, __attribute__((unused)) unsigned int cnt)
{
	stack_t *tmp = *stack_head, *aux;

	if (*stack_head == NULL || (*stack_head)->next == NULL)
	{
		return;
	}
	aux = (*stack_head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack_head;
	(*stack_head)->next = NULL;
	(*stack_head)->prev = tmp;
	(*stack_head) = aux;
}
