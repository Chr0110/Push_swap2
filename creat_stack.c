/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:00:05 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/28 00:38:06 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (ft_lstsize(*lst) != 0)
	{
		ft_lstlast(*lst)->next = new;
		new->next = NULL;
	}
	return ;
}

void	ft_creatlst(t_list **stack_a, int t, t_garbage **g)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	garbage(g, new);
	new->content = t;
	new->next = NULL;
	ft_lstadd_back(stack_a, new);
	return ;
}
