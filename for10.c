#include "push_swap.h"

int	index10(t_list *stack_a)
{
	int min;
	int ind;
	t_list *x;
	t_list *temp;
	ind = 1;
	temp = stack_a;
	min = (stack_a)->content;
	while (ft_lstsize(stack_a) != 1)
	{
		x = (stack_a)->next;
		if (min >= x->content)
		{
			min = x->content;
			stack_a = stack_a->next;
		}
		else
			stack_a = stack_a->next;
	}
	while (min != temp->content)
	{
		ind++;
		temp = temp->next;
	}
	return (ind);
}

void	sort10(t_list **stack_a, t_list **stack_b)
{
	int len;
	int index;
	int j;
	len = ft_lstsize(*stack_a);
	index = index10(*stack_a);
	while (len > 3)
	{
		j = len - index + 1;
		if (index < (len / 2))
			while (index-- > 1)
				ra(stack_a);
		else
		{
			while(j-->0)
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		len = ft_lstsize(*stack_a);
		index = index10(*stack_a);
	}
}
