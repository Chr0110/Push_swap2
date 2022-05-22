/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:32 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/22 01:28:11 by eradi-           ###   ########.fr       */
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

void	sort500again(t_list **stack_b, t_list **stack_a)
{
	int	len;
	int	index;
	int	j;

	len = ft_lstsize(*stack_b);
	index = index500again(*stack_b);
	while (len > 1)
	{
		j = len - index + 1;
		if (index <= (len / 2))
			while (index-- > 1)
				rb(stack_b);
		else
		{
			while (j-- > 0)
				rrb(stack_b);
		}
		pa(stack_b, stack_a);
		len = ft_lstsize(*stack_b);
		index = index500again(*stack_b);
	}	
	pa(stack_b, stack_a);
	return ;
}

int	howmuch500(t_list *stack_a, int key)
{
	int	i;
	int	len;
	int	small;

	i = 0;
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

int	index500(t_list *stack_a, int key)
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

void	sort500(t_list **stack_a, t_list **stack_b, int *str)
{
	int	len;
	int	index;
	int	j;
	int	key;

	len = ft_lstsize(*stack_a);
	while (ft_lstsize(*stack_a) != 0)
	{
		key = str[len / 20];
		index = index500(*stack_a, key);
		j = len - index + 1;
		if (index <= (len / 2))
			while (index-- > 1)
				ra(stack_a);
		else
			while (j-- > 0)
				rra(stack_a);
		pb(stack_a, stack_b);
		len = ft_lstsize(*stack_a);
		copy(*stack_a, str);
	}
	sort500again(stack_b, stack_a);
}
