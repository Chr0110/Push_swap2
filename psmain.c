#include "push_swap.h"

int main (int ac, char **av)
{
	int i;
	t_list *stack_a;
	stack_a = NULL;
	t_list *temp;
	t_list *stack_b;
	i = 1;
	if (ac != 1)
	{
		while(i < ac)
		{
			ft_creatlst(&stack_a, atoi(av[i]));
			i++;
		}
		i = 1;
		while (i < ac)
		{
			temp = ft_lstlast(stack_a);
			if (temp->content <= 5)
			{
				rra(&stack_a);
				pb(&stack_a, &stack_b);
			}
			else
				rra(&stack_a);
			i++;
		}
		//printf("%d\n", ft_lstsize(stack_a));
		while (ft_lstsize(stack_a) > 0)
			pb(&stack_a, &stack_b);
		ft_print(stack_b);
	}
	return (0);
}
