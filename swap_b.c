#include "push_swap.h"
void sb(t_list **stack_b)
{
	if (!(*stack_b) || ft_lstsize(*stack_b) == 1)
		return ;
	t_list *temp;
	t_list *temp2;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp2 = *stack_b;
	*stack_b = (*stack_b)->next;
	temp2->next = temp;
	temp->next = *stack_b;
	*stack_b = temp2;
}
