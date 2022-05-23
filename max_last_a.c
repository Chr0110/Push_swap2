/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_last_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:34:28 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 05:06:35 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	max_last_a(t_list **stack_a, t_list **stack_b, t_ind *ind)
{
	int	last;

	last = ft_lstlast(*stack_a)->content;
	while (!(ind->k == 0 || last < (*stack_b)->content))
	{
		rra(stack_a);
		ind->k--;
		last = ft_lstlast(*stack_a)->content;
	}
	pa(stack_b, stack_a);
}

void	not_max_last_a(t_list **stack_a, t_list **stack_b, t_ind *ind)
{
	if ((*stack_b)->content > ft_lstlast(*stack_a)->content)
	{
		pa(stack_b, stack_a);
		ra(stack_a);
		ind->k++;
	}
	else
	{
		if (index100again(*stack_b) < (ft_lstsize(*stack_b) / 2))
			rb(stack_b);
		else
			rrb(stack_b);
	}
}
