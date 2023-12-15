#include "monty.h"
/*bus_t bus = {NULL, NULL, NULL, 0};*/
/**
 * main - monty code interpreter
 * @argn: number of arguments
 * @argl: monty file location
 * Return: 0 on success
 */
int main(int argn, char *argl[])
{
	bus_t bus = {NULL, NULL, NULL, 0};
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int cnt = 0;

	if (argn != 2)
	{
		fprintf(staderr, "USAGE: monty file \n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argl[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: can't open file %s\n", argl[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
read_line = getline(&content, &size, file);
bus.content = content;
cnt++
	if (read_line > 0)
	{
		Execute_Stack(content, &stack, cnt, file);
	}
		free(content);
	}
Free_Stack(stack);
fclose(file);
return (0);
}
