/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for100.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:00:46 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 02:28:54 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index100again(t_list *stack_b)
{
	int		max;
	int		ind;
	t_list	*x;
	t_list	*temp;

	ind = 1;
	temp = stack_b;
	max = (stack_b)->content;
	while (ft_lstsize(stack_b) != 1)
	{
		x = (stack_b)->next;
		if (max <= x->content)
		{
			max = x->content;
			stack_b = stack_b->next;
		}
		else
			stack_b = stack_b->next;
	}
	while (max != temp->content)
	{
		ind++;
		temp = temp->next;
	}
	return (ind);
}

// void	sort100again(t_list **stack_b, t_list **stack_a)
// {
// 	int	len;
// 	int	index;
// 	int	j;

// 	len = ft_lstsize(*stack_b);
// 	index = index100again(*stack_b);
// 	while (len > 1)
// 	{
// 		j = len - index + 1;
// 		if (index <= (len / 2))
// 			while (index-- > 1)
// 				rb(stack_b);
// 		else
// 		{
// 			while (j-- > 0)
// 				rrb(stack_b);
// 		}
// 		pa(stack_b, stack_a);
// 		len = ft_lstsize(*stack_b);
// 		index = index100again(*stack_b);
// 	}	
// 	pa(stack_b, stack_a);
// 	return ;
// }

int	max_in_100(t_list *stack_b)
{
	int		max;
	int		ind;
	t_list	*x;
	t_list	*temp;	ind = 1;
	temp = stack_b;
	max = (stack_b)->content;
	while (ft_lstsize(stack_b) != 1)
	{
		x = (stack_b)->next;
		if (max <= x->content)
		{
			max = x->content;
			stack_b = stack_b->next;
		}
		else
			stack_b = stack_b->next;
	}
	return (max);
}

void	sort100again(t_list **stack_b, t_list **stack_a)
{
	int max;
	int k;
	int index;

	index = 0;
	k = 0;
	while (ft_lstsize(*stack_b))
	{
		max = max_in_100(*stack_b);
		//printf("%d\n", max);
		if (k == 0)
		{
			if ((*stack_b)->content != max)
			{
				pa(stack_b, stack_a);
				ra(stack_a);
				k++;
			}
			else
				pa(stack_b, stack_a);
		}
		else if ((*stack_b)->content == max)
		{
			if( max < ft_lstlast(*stack_a)->content)
			{
				while(k > 0)
				{
					rra(stack_a);
					k--;
				}
				pa(stack_b, stack_a);
			}
			else
				pa(stack_b, stack_a);
		}
		else
		{
			if ((*stack_b)->content < ft_lstlast(*stack_a)->content)
			{
				index = index100again(*stack_b);
				if (index < (ft_lstsize(*stack_b) / 2))
					rb(stack_b);
				else
					rrb(stack_b);
			}
			else
			{
				pa(stack_b, stack_a);
				ra(stack_a);
				k++;
			}
		}
		printf("%d\n", k);
	}
	while (k)
	{
		rra(stack_a);
		k--;
	}
}

int	index100(t_list *stack_a, int key)
{
	int	ind;
	int	small;

	ind = 1;
	small = stack_a->content;
	while (ft_lstsize(stack_a) != 1)
	{
		if (small >= key)
		{
			stack_a = stack_a->next;
			ind++;
		}
		else
			return (ind);
		small = stack_a->content;
	}
	return (ind);
}

void	sort100(t_list **stack_a, t_list **stack_b, int *str)
{
	int	len;
	int	index;
	int	j;
	int	key;

	len = ft_lstsize(*stack_a);
	while (ft_lstsize(*stack_a) != 0)
	{
		copy(*stack_a, str);
		key = str[len / 4];
		index = index100(*stack_a, key);
		j = len - index + 1;
		if (index <= (len / 2))
			while (index-- > 1)
				ra(stack_a);
		else
			while (j-- > 0)
				rra(stack_a);
		pb(stack_a, stack_b);
		len = ft_lstsize(*stack_a);
	}
	ft_print(*stack_b);
	printf("wa zaaaaaaaaaabi\n");
	sort100again(stack_b, stack_a);
	ft_print(*stack_a);
}
