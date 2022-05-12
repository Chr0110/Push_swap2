#include "push_swap.h"

void	rb(t_list **stack_b)
{
	t_list *temp;
	t_list *last;
	temp = *stack_b;
	(*stack_b) = (*stack_b)->next;
	last = ft_lstlast(*stack_b);
	last->next = temp;
	temp->next = NULL;
	//printf("rb\n");
}

// int main (int ac, char **av)
// {
// 	t_list *stack_b;
// 	int i;
// 	i = 1;
// 	while (i < ac)
// 	{
// 		ft_creatlst(&stack_b, atoi(av[i]));
// 		i++;
// 	}
// 	rb(&stack_b);
// 	ft_print(stack_b);
// 	return (0);
// }
