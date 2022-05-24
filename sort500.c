/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:32 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/24 09:47:57 by eradi-           ###   ########.fr       */
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

void	first_and_last(t_list *stack_a, int *str, t_ind *ind)
{
	int len;

	str = malloc(ft_lstsize(stack_a) * sizeof(stack_a));
	len = ft_lstsize(stack_a);
	copy(stack_a, str);
	if (20 > (len / 2))
	{
		ind->first = str[0];
		ind->last = str[len - 1];
	}
	else
	{
		ind->first = str[(len / 2) - 20];
		ind->last = str[(len / 2) + 20];
	}
}
void sort500(t_list **stack_a, t_list **stack_b, int *str, t_ind *ind)
{
	int len;
	int key2;
	ind->first = 0;
	ind->last = 0;
	str = malloc(ft_lstsize(*stack_a) * sizeof(stack_a));
	len = ft_lstsize(*stack_a);
	copy(*stack_a, str);
	key2 = str[len / 2];
	while (ft_lstsize(*stack_a))
	{
		if (20 > (len / 2))
		{
			ind->first = str[0];
			ind->last = str[len - 1];
		}
		else
		{
			ind->first = str[(len / 2) - 20];
			ind->last = str[(len / 2) + 20];
		}
		if ((*stack_a)->content >= ind->first && (*stack_a)->content <= ind->last)
		{
			pb(stack_a, stack_b);
			if ((*stack_b)->content < key2)
				rb(stack_b);
		}
		else if ((*stack_a)->content < ind->first || (*stack_a)->content > ind->last)
			ra(stack_a);
		len = ft_lstsize(*stack_a);
		copy((*stack_a), str);
	}
	sort500again(stack_b, stack_a, ind);
	ft_print(*stack_a);
}