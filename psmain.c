#include "push_swap.h"

int main (int ac, char **av)
{
	int i;
	t_list *stack_a;
	i = 1;
	if (ac != 1)
	{
		while (i < ac)
		{
			ft_creatlst(&stack_a, atoi(av[i]));
			i++;
		}
	}
	else
		return (0);
	return (0);
}