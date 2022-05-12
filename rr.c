#include "push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (!(*stack_a) && !(*stack_b))
		return ;
	if(*stack_a && ft_lstsize(*stack_a) != 1)
		ra(stack_a);
	if(*stack_b && ft_lstsize(*stack_b) != 1)
		rb(stack_b);
	//printf("rr\n");
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
// 	rr(&stack_a, &stack_b);
// 	ft_print(stack_a);
//     printf("\n");
// 	ft_print(stack_b);
// }
