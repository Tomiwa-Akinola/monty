#include "monty.h"
/**
 * _mod - computes rest of the division of the second
 * top element of stack by the top element of the stack
 * @head: stack head
 * @count: line_number
*/
void _mod(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, sec;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	sec = h->next->n % h->n;
	h->next->n = sec;
	*head = h->next;
	free(h);
}
