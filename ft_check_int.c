// #include "push_swap.h"

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

// int main (int ac, char **av)
// {
// 	int i = 1;
// 	while (i < ac)
// 	{
// 		if(ft_check_integer(av[i]) == 1)
// 		{
// 			printf("sorry i have to go hh\n");
// 			return (0);
// 		}
// 		i++;
// 	}
// 	return (0);
// }