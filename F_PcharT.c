#include "monty.h"
/**
 * F_PcharT - prints the char at the top of the stack
 * fpllowed by a new line
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void F_PcharT(stack_t **stack_head, unsigned int cnt)
{
	stack_t *hd;

	hd = *stack_head;
	if (!hd)
	{
		frintf(stderr, "L%d: can't pchar, stack empty\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar value out of range\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
