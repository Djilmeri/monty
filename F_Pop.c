#include "monty.h"
/**
 * F_Pop - prints top
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void F_Pop(stack_t **stack_head, unsigned int cnt)
{
	stack_t *hd;

	if (*stack_head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	hd = *stack_head;
	*stack_head = hd->next;
	free(hd);
}
