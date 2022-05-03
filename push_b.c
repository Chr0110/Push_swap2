#include "push_swap.h"

void	ft_pb(t_list **stack_a,t_list **stack_b)
{
	if (!(*stack_a))
		return ;
	t_list *temp;
	temp = *stack_a;
	(*stack_a) = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
}

int main (int ac, char **av)
{
	int i;
	t_list *stack_b;
	t_list *stack_a;
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		ft_creatlst(&stack_a, atoi(av[i]));
		i++;
	}
	ft_pb(&stack_a,&stack_b);
	ft_pb(&stack_a,&stack_b);
	ft_pb(&stack_a,&stack_b);
	ft_print(stack_b);
	return (0);
}
