/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:04:00 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/22 01:31:30 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) == 2)
	{
		if ((*stack_a)->content <= (*stack_a)->next->content)
			return ;
		else
			ra(stack_a);
	}
}
