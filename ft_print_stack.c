/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:00:55 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/22 04:35:17 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(t_list *stack_a)
{
	if (!stack_a)
		return ;
	write(1, "\n", 1);
	while (stack_a->next != NULL)
	{
		printf(" %d ", stack_a->content);
		stack_a = stack_a->next;
	}
	printf(" %d ", stack_a->content);
	write(1, "\n", 1);
}
