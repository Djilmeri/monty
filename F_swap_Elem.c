#include "monty.h"
/**
 * F_Swap_Elem - adds the to^tow elem of stack
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void F_Swap_Elem(stack_t **stack_head, unsigned int cnt)
{
	stack_t *hd;
	int leng = 0, aux;

	hd = *stack_head;
	while (hd)
	{
		hd = hd->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	hd = *stack_head;
	aux = hd->n;
	hd->n = hd->next->n;
	hd->next->n = aux;
}
