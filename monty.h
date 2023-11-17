#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <fcntl.h>
#include <unistd.h>

#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: param - integer element
 * @prev: points to the previous element.
 * @next: points to the next element
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct stub_s - structure variable.
 * @arg: param - value
 * @p_file: points to monty file
 * @cont: line content
 * @lifi: flag change stack.
 */
typedef struct stub_s
{
	int fin;
	char *cont;
	char *myarg;
	FILE *p_file;
}  stub_t;
extern stub_t stub;

char  *clean_line(char *content);


void clear_me(stack_t *head);
void montyPop(stack_t **head, unsigned int counter);

void montySub(stack_t **head, unsigned int counter);
void montyDiv(stack_t **head, unsigned int counter);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);

void montyMod(stack_t **head, unsigned int counter);
void montyPchar(stack_t **head, unsigned int counter);
void montyPstr(stack_t **head, unsigned int counter);
void montyRotl(stack_t **head, unsigned int counter);

void montyPush(stack_t **head, unsigned int number);
void montyPall(stack_t **head, unsigned int number);
void montyPint(stack_t **head, unsigned int number);
int montyRun(char *content, stack_t **head, unsigned int counter, FILE *file);
void montyMul(stack_t **head, unsigned int counter);

void montyRotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void montyAddnode(stack_t **head, int n);
void montyAddqueue(stack_t **head, int n);
void montyAdd(stack_t **head, unsigned int counter);
void montyNop(stack_t **head, unsigned int counter);

void montyQueue(stack_t **head, unsigned int counter);
void montyStack(stack_t **head, unsigned int counter);
void montySwap(stack_t **head, unsigned int counter);


#endif
