#include "push_swap.h"
void	ft_print(t_list *stack_a)
{
	if (!stack_a)
		return ;
	while (stack_a->next != NULL)
	{
		printf("%d->", stack_a->content);
		stack_a = stack_a->next;
	}
	printf("%d", stack_a->content);
}