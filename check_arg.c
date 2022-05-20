#include "push_swap.h"

int	ft_check_integer(char *av)
{
	int i;
	i = ft_strlen(av);
	while (i-- > 0)
	{
		if (!(av[i] >= '0' && av[i] <= '9'))
			return (1);
	}
	return (0);
}

int	ft_dupl(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		j = 1 + i;
		while(j < ac)
		{
			if (atoi(av[i]) == atoi(av[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
