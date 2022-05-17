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
