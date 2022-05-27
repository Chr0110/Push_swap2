/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:55 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/27 01:25:40 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three(t_list **stack_a)
{
	int	first;
	int	second;
	int	last;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	last = (*stack_a)->next->next->content;
	if (first > second && second < last && last > first)
		sa(stack_a);
	else if (first < second && second > last && last < first)
		rra(stack_a);
	else if (first > second && second > last && last < first)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (first > second && second < last && last < first)
		ra(stack_a);
	else if (first < second && second > last && last > first)
	{
		rra(stack_a);
		sa(stack_a);
	}
	return ;
}
