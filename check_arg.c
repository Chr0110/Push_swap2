/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:59:06 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/28 02:04:59 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_integer(int ac, char **av)
{
	int	i;
	int	x;

	x = -1;
	i = 0;
	while (++i < ac)
	{
		while (++x < ft_strlen(av[i]))
		{
			if ((av[i][0] == '-' || av[i][0] == '+')
				&& (av[i][1] == '-' || av[i][1] == '+'))
				return (1);
			if ((av[i][x] >= '0' && av[i][x] <= '9') && (av[i][x + 1] == '-'
				|| av[i][x + 1] == '+'))
				return (1);
			if ((av[i][0] == '-' || av[i][0] == '+')
				&& (av[i][1] == '\0' || av[i][1] == '\0'))
				return (1);
			if (!((av[i][x] >= '0' && av[i][x] <= '9') ||
				(av[i][x] == '-' || av[i][x] == '+')))
				return (1);
		}
		x = -1;
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
	int	min;
	int	i;
	int	j;

	j = 2;
	i = 1;
	while (j < ac)
	{
		min = atoi(av[i]);
		if (min > atoi(av[j]))
			return (0);
		else
			i++;
		j = i + 1;
	}
	return (1);
}
