#include "push_swap.h"

void ss(t_list **stack_a,t_list **stack_b)
{
	if (!(*stack_a) && !(*stack_b))
		return ;
	if(*stack_a && ft_lstsize(*stack_a) != 1)
		sa(stack_a);
	if(*stack_b && ft_lstsize(*stack_b) != 1)
		sb(stack_b);
	printf("ss\n");
}

// int main (int ac, char **av)
// {
// 	t_list *stack_a;
// 	t_list *stack_b;
// 	int i = 1;
// 	while (i < ac)
// 	{
// 		ft_creatlst(&stack_a, atoi(av[i]));
// 		ft_creatlst(&stack_b, atoi(av[i]));
// 		i++;
// 	}
// 	ss(&stack_a, &stack_b);
// 	ft_print(stack_a);
// 	ft_print(stack_b);
// }