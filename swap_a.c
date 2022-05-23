/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:03:43 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 01:44:04 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *stack_a;
	if (!(*stack_a) || ft_lstsize(*stack_a) == 1)
		return ;
	*stack_a = (*stack_a)->next;
	temp2 = *stack_a;
	*stack_a = (*stack_a)->next;
	temp2->next = temp;
	temp->next = *stack_a;
	*stack_a = temp2;
//	write(1, "sa\n", 3);
}
