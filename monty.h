#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
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
 * struct stub_s - variables -args, file, line content
 * @arg: value
 * @p_file: pointer to monty file
 * @cont: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct stub_s
{
	int fin;
	char *cont;
	char *myarg;
	FILE *p_file;
}  stub_t;
extern stub_t stub;
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

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void montyPush(stack_t **head, unsigned int number);
void montyPall(stack_t **head, unsigned int number);
void montyPint(stack_t **head, unsigned int number);
int montyRun(char *content, stack_t **head, unsigned int counter, FILE *file);
void clear_me(stack_t *head);
void montyPop(stack_t **head, unsigned int counter);
void montySwap(stack_t **head, unsigned int counter);
void montyAdd(stack_t **head, unsigned int counter);
void montyNop(stack_t **head, unsigned int counter);
void montySub(stack_t **head, unsigned int counter);
void montyDiv(stack_t **head, unsigned int counter);
void montyMul(stack_t **head, unsigned int counter);
void montyMod(stack_t **head, unsigned int counter);
void montyPchar(stack_t **head, unsigned int counter);
void montyPstr(stack_t **head, unsigned int counter);
void montyRotl(stack_t **head, unsigned int counter);
void montyRotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void montyAddnode(stack_t **head, int n);
void montyAddqueue(stack_t **head, int n);
void montyQueue(stack_t **head, unsigned int counter);
void montyStack(stack_t **head, unsigned int counter);

#endif
