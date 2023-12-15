#include "monty.h"
/**
 * F_printstr - prints the string stating at the of
 * the stack, followed by a new
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void  F_printstr(stack_t **stack_head, unsigned int cnt)
{
	stack_t *hd;
	(void)cnt;

	hd = *stack_head;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
