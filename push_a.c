#include "push_swap.h"

void	pa(t_list **stack_b,t_list **stack_a)
{
	if (!(*stack_b))
		return ;
	t_list *temp;
	temp = *stack_b;
	(*stack_b) = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	//printf("pa\n");
}
