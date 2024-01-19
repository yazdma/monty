#include "monty.h"
/**
 * free_stack - frees a doubly linked lists
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack *aux;

	aux = *head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
