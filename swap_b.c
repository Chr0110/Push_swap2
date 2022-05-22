/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:50 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/22 01:30:19 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **stack_b)
{
	t_list	*temp;
	t_list	*temp2;

	if (!(*stack_b) || ft_lstsize(*stack_b) == 1)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp2 = *stack_b;
	*stack_b = (*stack_b)->next;
	temp2->next = temp;
	temp->next = *stack_b;
	*stack_b = temp2;
	write(1, "sb\n", 3);
}
