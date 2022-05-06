#include "push_swap.h"

void    two(t_list **stack_a)
{
    if(ft_lstsize(*stack_a) == 2)
	{
		if((*stack_a)->content <= (*stack_a)->next->content)
			return ;
		else
			ra(stack_a);
	}
}