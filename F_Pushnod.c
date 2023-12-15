#include "monty.h"
/**
 * F_pushnode - add node to the stack
 * @stack_head: stack head
 * @cnt: line number
 * Return: no return
 */
void F_pushnode(stack_t **stack_head, unsigned int cnt)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
			flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", cnt);
			fclose(bus.file);
			free(bus.content);
			Free_Stack(*stack_head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d:usage: push integer\n", cnt);
		fclose(bus.file);
		free(bus.content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		Add_node(stack_head, n);
	else
		Add_node(stack_head, n);
}

