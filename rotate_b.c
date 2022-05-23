/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:02:58 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 02:58:11 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **stack_b)
{
	t_list	*temp;
	t_list	*last;

	temp = *stack_b;
	if (ft_lstsize(*stack_b) <= 1)
		return ;
	(*stack_b) = (*stack_b)->next;
	last = ft_lstlast(*stack_b);
	last->next = temp;
	temp->next = NULL;
	write(1, "rb\n", 3);
}
