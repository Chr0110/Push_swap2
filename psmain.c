/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:01:15 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/22 03:35:53 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_string(int *str, int ac)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = 0;
	while (i < ac)
	{
		j = i;
		while (j < ac)
		{
			if (str[i] > str[j])
			{
				swap = str[i];
				str[i] = str[j];
				str[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;
	int		*str;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;
	if (ac > 3)
	{
		if (ft_dupl(ac, av) == 1)
			return (0);
		while (++i < ac)
		{
			if (ft_check_integer(av[i]) == 1)
				return (0);
			ft_creatlst(&stack_a, atoi(av[i]));
		}
		str = malloc(ft_lstsize(stack_a) * sizeof(int));
		copy(stack_a, str);
		if (ft_lstsize(stack_a) == 2)
		{
			two(&stack_a);
			return (0);
		}
		ft_sort_stack(stack_a, str);
	}
	return (0);
}
