/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:30:03 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/25 19:16:04 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	nb;
	char		*p;
	int			i;

	p = (char *)str;
	sign = 1;
	while ((*p >= 9 && *p <= 13) || *p == ' ')
		p++;
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign *= -1;
		p++;
	}
	nb = 0;
	i = 0;
	while (p[i] >= '0' && p[i] <= '9')
		nb = (nb * 10) + p[i++] - '0';
	if (nb > 2147483647)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	return (sign * nb);
}
