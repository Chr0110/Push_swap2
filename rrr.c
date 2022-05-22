/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:24 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/22 01:30:34 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (!(*stack_a) && !(*stack_b))
		return ;
	if (*stack_a && ft_lstsize(*stack_a) != 1)
		rra(stack_a);
	if (*stack_b && ft_lstsize(*stack_b) != 1)
		rrb(stack_b);
	write(1, "rrr\n", 4);
}
