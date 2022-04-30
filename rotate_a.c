#include "push_swap.h"
void	ft_ra(t_list **stack_a)
{
	t_list *temp;
	t_list *last;
	temp = *stack_a;
	(*stack_a) = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = temp;
	temp->next = NULL;
}

int main (int ac, char **av)
{
	t_list *stack_a;
	int i;
	i = 1;
	while (i < ac)
	{
		ft_creatlst(&stack_a, atoi(av[i]));
		i++;
	}
	ft_ra(&stack_a);
	ft_print(stack_a);
	return (0);
}