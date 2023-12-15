#include "monty.h"
/**
 * F_Mul - multiplier the top two elemt of the stack
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void F_Mul(stack_t **stack_head, unsigned int cnt)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	hd = *stack_head;
	aux = hd->next->n * hd->n;
	hd->next->n = aux;
	*stack_head = hd->next;
	free(hd);
}
