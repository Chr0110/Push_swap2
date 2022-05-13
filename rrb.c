#include "push_swap.h"

void	rrb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) == 1)
		return;
	t_list *temp;
	t_list *temp2;
	t_list *first;
	temp = *stack_b;
	while ((*stack_b)->next->next != NULL)
		(*stack_b) = (*stack_b)->next;
	temp2 = *stack_b;
	(*stack_b) = (*stack_b)->next;
	first = *stack_b;
	first->next = temp;
	temp2->next = NULL;
	*stack_b = first;
	printf("rrb\n");
}

// int main (int ac, char **av)
// {
//     t_list *stack_b;
//     int i = 1;
//     if (ac > 1)
//     {
//         while (i < ac)
//         {
//             ft_creatlst(&stack_b, atoi(av[i]));
//             i++;
//         }
//     }
//     else
//         return (0);
//     rra(&stack_b);
//     ft_print(stack_b);
// }