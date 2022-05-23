/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:02:50 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 04:30:48 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*temp;
	t_list	*last;

	temp = *stack_a;
	if (ft_lstsize(*stack_a) <= 1)
		return ;
	(*stack_a) = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = temp;
	temp->next = NULL;
	write(1, "ra\n", 3);
}
