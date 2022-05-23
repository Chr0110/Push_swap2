/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:59:06 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 05:56:54 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_integer(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < ac)
	{
		j = ft_strlen(av[i]);
		while (j-- > 0)
		{
			if (!((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '-'
				|| av[i][j] == '+'))
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_dupl(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		j = 1 + i;
		while (j < ac)
		{
			if (atoi(av[i]) == atoi(av[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_sort(int ac, char **av)
{
	int min;
	int i = 0;
	min = atoi(av[i]);
	while (i < ac)
	{
		if (min > atoi(av[i + 1]))
			return (1);
		else
			min = atoi(av[i + 1]);
	}
	return (0);
}
