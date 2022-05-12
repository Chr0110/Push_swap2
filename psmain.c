#include "push_swap.h"

int main (int ac, char **av)
{
	int i;
	t_list *stack_a;
	stack_a = NULL;
	t_list *stack_b;
	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		ft_creatlst(&stack_a, atoi(av[i]));
		i++;
	}
	if (ft_lstsize(stack_a) == 2)
	{
		two(&stack_a);
		return (0);
	}
	else if (ft_lstsize(stack_a) <= 10)
	{
		sort10(&stack_a, &stack_b);
		three(&stack_a);
		while (ft_lstsize(stack_b)!= 0)
			pa(&stack_b, &stack_a);
		return (0);
	}
	if (ft_lstsize(stack_a) <= 100)
	{
		sort100(&stack_a, &stack_b);
		return (0);
	}
	if (ft_lstsize(stack_a) <= 500)
	{
		sort500(&stack_a, &stack_b);
		return (0);
	}
	return(0);
}
