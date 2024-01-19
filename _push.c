#include "monty.h"
/**
 * _push - adds node to stack
 * @head: stack head
 * @count: line_number
*/
void _push(stack_t **head, unsigned int count)
{
	int i, j = 0, flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack_(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack_(*head);
		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(head, i);
	else
		add_queue(head, i);
}
