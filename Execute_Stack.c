#include "monty.h"
/**
* Execute_Stack - executes the opcode
* @stack_head: head linked list - stack
* @cnt: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int Execute_Stack(char *content, stack_t **stack_head,
		unsigned int cnt, FILE *file)
{
	instruction_t opst[] = {
				{"push", F_Pushnode}, {"pall", F_Pall}, {"pint", F_Pint},
				{"pop", F_Pop},
				{"swap", F_Swap_Elem},
				{"add", F_Add},
				{"nop", F_Nop},
				{"sub", F_Sub_node},
				{"div", F_Div},
				{"mul", F_Mul},
				{"mod", F_Mod},
				{"pchar", F_PcharT},
				{"pstr", F_Printstr},
				{"rotl", F_Rotat},
				{"rotr", F_Rotat_r},
				{"queue", F_Que},
				{"stack", F_TopStack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack_head, cnt);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", cnt, op);
		fclose(file);
		free(content);
		Free_Stack(*stack_head);
		exit(EXIT_FAILURE); }
	return (1);
}
