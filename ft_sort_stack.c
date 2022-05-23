/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:01:08 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 04:57:39 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_stack(t_list *stack_a, int *str, t_ind *ind)
{
	t_list	*stack_b;

	stack_b = NULL;
	str = malloc(ft_lstsize(stack_a) * sizeof(int));
	if (ft_lstsize(stack_a) <= 10)
	{
		sort10(&stack_a, &stack_b);
		three(&stack_a);
		while (ft_lstsize(stack_b) != 0)
			pa(&stack_b, &stack_a);
		return ;
	}
	else if (ft_lstsize(stack_a) <= 100)
	{
		sort100(&stack_a, &stack_b, str, ind);
		return ;
	}
	else if (ft_lstsize(stack_a) > 100)
	{
		sort500(&stack_a, &stack_b, str, ind);
		return ;
	}
	return ;
}
