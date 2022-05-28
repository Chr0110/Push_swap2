/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:00:55 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/28 00:57:00 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		printf(" %d ", stack_a->content);
		stack_a = stack_a->next;
	}
}
