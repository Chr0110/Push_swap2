/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:39 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/24 05:21:14 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (!(*stack_a) && !(*stack_b))
		return ;
	if (*stack_a && ft_lstsize(*stack_a) != 1)
		sa(stack_a);
	if (*stack_b && ft_lstsize(*stack_b) != 1)
		sb(stack_b);
	write(1, "ss\n", 3);
}
