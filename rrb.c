/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:18 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/27 02:10:12 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **stack_b)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*first;

	if (ft_lstsize(*stack_b) <= 1)
		return ;
	temp = *stack_b;
	while ((*stack_b)->next->next != NULL)
		(*stack_b) = (*stack_b)->next;
	temp2 = *stack_b;
	(*stack_b) = (*stack_b)->next;
	first = *stack_b;
	first->next = temp;
	temp2->next = NULL;
	*stack_b = first;
	write(1, "rrb\n", 4);
}
