#include "push_swap.h"

int main (int ac, char **av)
{
	int i;
	i = 1;
	t_list *stack_a;
	stack_a = NULL;
	t_list *stack_b;
	stack_b = NULL;
	if (ac != 1)
	{
		while(i < ac)
		{
			ft_creatlst(&stack_a, atoi(av[i]));
			i++;
		}
		if(ft_lstsize(stack_a) == 1)
			return (0);
		if(ft_lstsize(stack_a) <= 3)
		{
			if(ft_lstsize(stack_a) == 2)
				two(&stack_a);
			if(ft_lstsize(stack_a) == 3)
				three(&stack_a, &stack_b);
		}
	}
	ft_print(stack_a);
	return (0);
}
