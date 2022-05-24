/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:59:06 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/24 10:45:22 by eradi-           ###   ########.fr       */
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

int	ft_check_max(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi(av[i]) == 1)
		{
			printf("%d\n", ft_atoi(av[i]));
			return (1);
		}
		i++;
	}
	return (0);
}
