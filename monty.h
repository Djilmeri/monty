#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
int main(int argn, char *argl[]);
void F_Pushnode(stack_t **stack_head, unsigned int cnt);
void F_Pall(stack_t **stack_head, unsigned int cnt);
void F_Pint(stack_t **stack_head, unsigned int cnt);
int Execute_Stack(char *content, stack_t **stack_head,
		unsigned int cnt, FILE *file);
void Free_Stack(stack_t *stack_head);
void F_Pop(stack_t **stack_head, unsigned int cnt);
void F_Swap_Elem(stack_t **stack_head, unsigned int cnt);
void F_Add(stack_t **stack_head, unsigned int cnt);
void F_Nop(stack_t **stack_head, unsigned int cnt);
void F_Sub_node(stack_t **stack_head, unsigned int cnt);
void F_Div(stack_t **stack_head, unsigned int cnt);
void F_Mul(stack_t **stack_head, unsigned int cnt);
void F_Mod(stack_t **stack_head, unsigned int cnt);
void F_PcharT(stack_t **stack_head, unsigned int cnt);
void F_Printstr(stack_t **stack_head, unsigned int cnt);
void F_Rotat(stack_t **stack_head, __attribute__((unused)) unsigned int cnt);
void F_Rotat_r(stack_t **stack_head, __attribute__((unused)) unsigned int cnt);
void Add_node(stack_t **stack_head, int new_val);
void Queue_Add(stack_t **stack_head, int new_val);
void F_Que(stack_t **stack_head, unsigned int cnt);
void F_TopStack(stack_t **stack_head, unsigned int cnt);
#endif
