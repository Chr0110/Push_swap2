#include "push_swap.h"

void sa(t_list **stack_a)
{
	if (!(*stack_a) || ft_lstsize(*stack_a) == 1)
		return ;
	t_list *temp;
	t_list *temp2;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp2 = *stack_a;
	*stack_a = (*stack_a)->next;
	temp2->next = temp;
	temp->next = *stack_a;
	*stack_a = temp2;
}

// int main (int ac, char **av)
// {
// 	t_list *stack_a;
// 	int i;
// 	i = 1;
// 	while (i < ac)
// 	{
// 		ft_creatlst(&stack_a, atoi(av[i]));
// 		i++;
// 	}
// 	sa(&stack_a);
// 	ft_print(stack_a);
// }