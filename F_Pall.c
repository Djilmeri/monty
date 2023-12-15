#include "monty.h"
/**
 * F_Pall - prints the stack
 * @stack_head: stack head
 * @cnt: no used
 * Return: no return
 */
void F_Pall(stack_t **stack_head, unsigned int cnt)
{
	stack_t *hd;
	(void)cnt;

	hd = *stack_head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
