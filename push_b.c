/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:01:32 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/24 09:17:45 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	temp = *stack_a;
	if (!(*stack_a))
		return ;
	(*stack_a) = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
	write(1, "pb\n", 3);
}
