#include "monty.h"
/**
 * F_Sub_node - sustraction
 * @stack_head: stack head
 * @cnt: line number
 */
void F_Sub_node(stack_t **stack_head, unsigned int cnt)
{
	stack_t *aux;
	int sub, nod;

	aux = *stack_head;
	for (nod = 0; aux != NULL; nod++)
		aux = aux->next;
	if (nod < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	aux = *stack_head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*stack_head = aux->next;
	free(aux);
}
