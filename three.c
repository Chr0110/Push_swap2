#include "push_swap.h"

void    three(t_list **stack_a, t_list **stack_b)
{
	if((*stack_a)->content <= (*stack_a)->next->content)
		three1(stack_a, stack_b);
	if((*stack_a)->content >= (*stack_a)->next->content)
		three2(stack_a, stack_b);
}
// int main (int ac, char **av)
// {
// 	int i;
// 	t_list *stack_a;
// 	stack_a = NULL;
// 	i = 1;
// 	while (i < ac)
// 	{
// 		ft_creatlst(&stack_a, atoi(av[i]));
// 		i++;
// 	}
//     three(&stack_a);
// 	ft_print(stack_a);
// 	return (0);
// }
