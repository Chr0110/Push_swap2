#include "push_swap.h"

void    three2(t_list **stack_a, t_list **stack_b)
{
    	ra(stack_a);
		pb(stack_a, stack_b);
		if((*stack_a)->content >= (*stack_a)->next->content)
		{
			ra(stack_a);
			pb(stack_a, stack_b);
		}
		else
			pb(stack_a, stack_b);
		if((*stack_b)->content < (*stack_b)->next->content)
		{
			rb(stack_b);
			pa(stack_b, stack_a);
			pa(stack_b, stack_a);
		}
		else
		{
			pa(stack_b, stack_a);
			pa(stack_b, stack_a);						
		}
}