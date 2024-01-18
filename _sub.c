#include "monty.h"
/**
  *_sub- sustration
  *@head: stack head
  *@count: line_number
 */
void _sub(stack_t **head, unsigned int count)
{
	stack_t *sec;
	int sus, st_nodes;

	sec = *head;
	for (st_nodes = 0; sec != NULL; st_nodes++)
		sec = sec->next;
	if (st_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	sec = *head;
	sus = sec->next->n - sec->n;
	sec->next->n = sus;
	*head = sec->next;
	free(sec);
}
