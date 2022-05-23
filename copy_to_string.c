/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_to_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:59:35 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 02:19:49 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	copy(t_list *stack_a, int *str)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = stack_a;
	while (i < ft_lstsize(stack_a))
	{
		str[i] = temp->content;
		temp = temp->next;
		i++;
	}
	sort_string(str, ft_lstsize(stack_a));
	return ;
}
