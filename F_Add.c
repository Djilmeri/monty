#include "monty.h"
/**
 * F_Add - adds the top two element of the stack
 * @stack_head: stack head
 * @cnt: line of number
 * Return: non return
 */
void F_Add(stack_t **stack_head, unsigned int cnt)
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
		fprintf(stderr, "L%d: cant't add, stack too chort\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	hd = *stack_head;
	aux = hd->n + hd->next->n;
	hd->next->n = hd->hd next;
	free(hd);
}
