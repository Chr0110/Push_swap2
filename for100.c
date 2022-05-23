/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for100.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:00:46 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 03:47:36 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index100again(t_list *stack_b)
{
	int		max;
	int		ind;
	t_list	*x;
	t_list	*temp;

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

int	max_in_100(t_list *stack_b)
{
	int		max;
	int		ind;
	t_list	*x;
	t_list	*temp;	ind = 1;
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
	return (max);
}

void	sort100again(t_list **stack_b, t_list **stack_a)
{
	int max;
	int k;
	int index;

	index = 0;
	k = 0;
	while (ft_lstsize(*stack_b))
	{
		max = max_in_100(*stack_b);
		if (k == 0)
		{
			if ((*stack_b)->content != max)
			{
				pa(stack_b, stack_a);
				ra(stack_a);
				k++;
			}
			else
				pa(stack_b, stack_a);
		}
		else if ((*stack_b)->content == max)
		{
			while (!(k == 0 || ft_lstlast(*stack_a)->content < (*stack_b)->content))
			{
				rra(stack_a);
				k--;
			}
			pa(stack_b, stack_a);
		}
		else if ((*stack_b)->content != max)
		{
			if ((*stack_b)->content > ft_lstlast(*stack_a)->content)
			{
				pa(stack_b, stack_a);
				ra(stack_a);
				k++;
			}
			else
			{
				index = index100again(*stack_b);
				if (index <= (ft_lstsize(*stack_b) / 2))
					rb(stack_b);
				else
					rrb(stack_b);
			}
		}
	}
	while (k)
	{
		rra(stack_a);
		k--;
	}
}

int	index100(t_list *stack_a, int key)
{
	int	ind;
	int	small;

	ind = 1;
	small = stack_a->content;
	while (ft_lstsize(stack_a) != 1)
	{
		if (small >= key)
		{
			stack_a = stack_a->next;
			ind++;
		}
		else
			return (ind);
		small = stack_a->content;
	}
	return (ind);
}

void	sort100(t_list **stack_a, t_list **stack_b, int *str)
{
	int	len;
	int	index;
	int	j;
	int	key;

	len = ft_lstsize(*stack_a);
	while (ft_lstsize(*stack_a) != 0)
	{
		copy(*stack_a, str);
		key = str[len / 4];
		index = index100(*stack_a, key);
		j = len - index + 1;
		if (index <= (len / 2))
			while (index-- > 1)
				ra(stack_a);
		else
			while (j-- > 0)
				rra(stack_a);
		pb(stack_a, stack_b);
		len = ft_lstsize(*stack_a);
	}
	sort100again(stack_b, stack_a);
}
