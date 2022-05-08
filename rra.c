#include "push_swap.h"

void	rra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) <= 1 )
		return;
	t_list *temp;
	t_list *temp2;
	t_list *first;
	temp = *stack_a;
	while ((*stack_a)->next->next != NULL)
		(*stack_a) = (*stack_a)->next;
	temp2 = *stack_a;
	(*stack_a) = (*stack_a)->next;
	first = *stack_a;
	first->next = temp;
	temp2->next = NULL;
	*stack_a = first;
	printf("rra\n");
}

// int main (int ac, char **av)
// {
//     t_list *stack_a;
//     int i = 1;
//     if (ac > 1)
//     {
//         while (i < ac)
//         {
//             ft_creatlst(&stack_a, atoi(av[i]));
//             i++;
//         }
//     }
//     else
//         return (0);
//     rra(&stack_a);
//     //ft_print(stack_a);
// }