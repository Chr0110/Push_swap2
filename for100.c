#include "push_swap.h"

int	index100again(t_list *stack_b)
{
	int max;
	int ind;
	t_list *x;
	t_list *temp;
	ind = 1;
	temp = stack_b;
	max = (stack_b)->content;
	while (ft_lstsize(stack_b) != 1)
	{
		x = (stack_b)->next;
		if (max <= x->content)
		{
			max = x->content;
			stack_b = stack_b->next;
		}
		else
			stack_b = stack_b->next;
	}
	while (max != temp->content)
	{
		ind++;
		temp = temp->next;
	}
	return (ind);
}

void	sort100again(t_list **stack_b, t_list **stack_a)
{
	int len;
	int index;
	int j;

	len = ft_lstsize(*stack_b);
	index = index100again(*stack_b);
	while (len > 1)
	{
		j = len - index + 1;
		if (index <= (len / 2))
			while (index-- > 1)
				rb(stack_b);
		else
		{
			while(j-->0)
				rrb(stack_b);
		}
		pa(stack_b, stack_a);
		len = ft_lstsize(*stack_b);
		index = index100again(*stack_b);
	}	
	pa(stack_b, stack_a);
}

int	howmuch100(t_list *stack_a, int key)
{
	int i;
	i = 0;
	int len;
	int small;
	len = ft_lstsize(stack_a);
	small = stack_a->content;
	while (len != 0 && stack_a->next != NULL)
	{
		if (small > key)
			stack_a = stack_a->next;
		else
		{
			stack_a = stack_a->next;
			i++;
		}
		small = stack_a->content;
		len--;
	}
	if (small < key)
		i++;
	return (i);
}

int	index100(t_list *stack_a, int key)
{
	int ind;
	int small;
	int rep;
	int j;

	j = key;
	ind = 1;
	rep = howmuch100(stack_a, key);
	small = stack_a->content;
	while (ft_lstsize(stack_a) != 1)
	{
		while (rep-- > 0)
		{
			if (small >= key)
			{
				stack_a = stack_a->next;
				ind++;
			}
			else
				return(ind);
			small = stack_a->content;
		}
		rep = howmuch100(stack_a, key);
		key = key + j;
	}
	return (ind);
}

void	sort100(t_list **stack_a, t_list **stack_b)
{
	int len;
	int index;
	int j;
	int key;

	len = ft_lstsize(*stack_a);
	key = ft_lstsize(*stack_a) / 4;
	while (ft_lstsize(*stack_a) != 0)
	{
		index = index100(*stack_a, key);
		j = len - index + 1;
		if (index <= (len / 2))
		while (index-- > 1)
			ra(stack_a);
		else
		{
			while(j-- > 0)
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		len = ft_lstsize(*stack_a);
		// if (ft_lstsize(*stack_a) == 3)
		// 	break ;
	}
	//three(stack_a);
	sort100again(stack_b, stack_a);
}
