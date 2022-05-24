/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:32 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/24 04:23:31 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index500again(t_list *stack_b)
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

int	max_in_500(t_list *stack_b)
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
	return (max);
}

void	sort500again(t_list **stack_b, t_list **stack_a, t_ind *ind)
{
	ind->k = 0;
	while (ft_lstsize(*stack_b))
	{
		if (ind->k == 0)
		{
			if ((*stack_b)->content != max_in_500(*stack_b))
			{
				pa(stack_b, stack_a);
				ra(stack_a);
				ind->k++;
			}
			else
				pa(stack_b, stack_a);
		}
		else if ((*stack_b)->content == max_in_500(*stack_b))
			max_last_a(stack_a, stack_b, ind);
		else
			not_max_last_a(stack_a, stack_b, ind);
	}
	while (ind->k)
	{
		rra(stack_a);
		ind->k--;
	}
}

int	index500(t_list *stack_a, int first, int last)
{
	int	ind;
	int	small;

	ind = 1;
	small = stack_a->content;
	while (ft_lstsize(stack_a) != 1)
	{
		if (small > last || small < first)
		{
			stack_a = stack_a->next;
			ind++;
		}
		else if (small <= last && small >= first)
			return (ind);
		small = stack_a->content;
	}
	return (0);
}

void	sort500(t_list** stack_a, t_list **stack_b, t_ind *ind)
{
	int	first;
	int	last;
	int	key;
	int index;
	int *str;
	int j = 0;
	int len = ft_lstsize(*stack_a);
	int key2;
	str = malloc(ft_lstsize(*stack_a) * sizeof(int));
	copy(*stack_a, str);
	while(ft_lstsize(*stack_a))
	{
		key = 35;
		if (key > (len / 2))
			key = len / 2;
		key2 = key * 2;
		while(--key2 >= 0)
		{
			last = str[(len / 2) + key];
			first = str[(len / 2) - key];
			index = index500(*stack_a, first, last);
			j = len - index + 1;
			if (index <= (len / 2))
				while (index-- > 1)
					ra(stack_a);
			else
				while (j-- > 0)
					rra(stack_a);
			pb(stack_a, stack_b);
			if ((*stack_b)->content > str[len / 2])
				rb(stack_b);	
		}
		len = ft_lstsize(*stack_a);
		copy(*stack_a, str);		
	}
	sort500again(stack_b, stack_a, ind);
	//ft_print(*stack_b);
}