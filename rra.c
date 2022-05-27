/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:11 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/27 01:30:09 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*first;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	temp = *stack_a;
	while ((*stack_a)->next->next != NULL)
		(*stack_a) = (*stack_a)->next;
	temp2 = *stack_a;
	(*stack_a) = (*stack_a)->next;
	first = *stack_a;
	first->next = temp;
	temp2->next = NULL;
	*stack_a = first;
	write(1, "rra\n", 4);
}
