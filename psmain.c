/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:01:15 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/24 10:50:21 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(void)
{
	write(1, "ERROR\n", 6);
	return ;
}

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
	t_ind	ind;

	i = 0;
	if (ac > 2)
	{
		if (ft_dupl(ac, av) == 1 || ft_check_integer(ac, av) == 1)
		{
			write(1, "ERROR\n", 6);
			return (0);
		}
		if (check_sort(ac, av) == 1)
			return (0);
		while (++i < ac)
			ft_creatlst(&stack_a, ft_atoi(av[i]));
		if (ft_lstsize(stack_a) == 2)
		{
			two(&stack_a);
			return (0);
		}
		ft_sort_stack(stack_a, &ind);
	}
	return (0);
}
