#include "push_swap.h"

void    three(t_list **stack_a)
{
    int    first;
    int    secend;
    int    last;

    first = (*stack_a)->content;
    secend = (*stack_a)->next->content;
    if ((ft_lstsize(*stack_a) == 2) && (first > secend))
        sa(stack_a);
    last = (*stack_a)->next->next->content;
    if ((first > secend) && (last > secend) && (last > first))
        sa(stack_a);
    else if ((first > secend) && (secend > last) && (last < first))
    {
        sa(stack_a);
        rra(stack_a);
    }
    else if ((first > secend) && (secend < first) && (last < first))
        ra(stack_a);
    else if ((first < secend) && (secend > last) && (last > first))
    {
        sa(stack_a);
        ra(stack_a);
    }
    else if ((first < secend) && (secend > first) && (last < first))
        rra(stack_a);
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
