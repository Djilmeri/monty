#include "monty.h"
/**
 * F_Print - prints the top
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void F_Print(syack_t **stack_head, unsigned int cnt)
{
	if (*stack_head == NULL)
	{
		fprintf(stderr, "L%u: can't print, stack empty\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free.Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack_head)->n);
}
