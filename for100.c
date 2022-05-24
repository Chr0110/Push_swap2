/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for100.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:00:46 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/24 09:26:11 by eradi-           ###   ########.fr       */
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

void	sort100again(t_list **stack_b, t_list **stack_a, t_ind *ind)
{
	ind->k = 0;
	while (ft_lstsize(*stack_b))
	{
		if (ind->k == 0)
		{
			if ((*stack_b)->content != max_in_100(*stack_b))
			{
				pa(stack_b, stack_a);
				ra(stack_a);
				ind->k++;
			}
			else
				pa(stack_b, stack_a);
		}
		else if ((*stack_b)->content == max_in_100(*stack_b))
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

void sort100(t_list **stack_a, t_list **stack_b, t_ind *ind, int *str)
{
	int len;
	int last;
	int first;
	ind->k = 0;
	str = malloc(ft_lstsize(*stack_a) * sizeof(stack_a));
	len = ft_lstsize(*stack_a);
	copy(*stack_a, str);
	int key2 = str[len / 2];
	int key = 8;
	while (ft_lstsize(*stack_a))
	{
		if (key > (len / 2))
		{
			first = str[0];
			last = str[len - 1];
		}
		else
		{
			first = str[(len / 2) - key];
			last = str[(len / 2) + key];
		}
		if ((*stack_a)->content >= first && (*stack_a)->content <= last)
		{
			pb(stack_a, stack_b);
			if ((*stack_b)->content < key2)
				rb(stack_b);
		}
		else if ((*stack_a)->content < first || (*stack_a)->content > last)
		{
			ra(stack_a);
		}
		len = ft_lstsize(*stack_a);
		copy((*stack_a), str);
	}
	sort100again(stack_b, stack_a, ind);
}