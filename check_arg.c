/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:59:06 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/22 01:13:55 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_integer(char *av)
{
	int	i;

	i = ft_strlen(av);
	while (i-- > 0)
	{
		if (!((av[i] >= '0' && av[i] <= '9') || av[i] == '-'))
			return (1);
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
