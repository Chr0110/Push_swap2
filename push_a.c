#include "push_swap.h"
void ft_pa(t_list **stack_b,t_list **stack_a)
{
	if (!(*stack_b))
		return ;
	t_list *temp;
	temp = *stack_b;
	(*stack_b) = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
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
		ft_creatlst(&stack_b, atoi(av[i]));
		i++;
	}
	ft_pa(&stack_b,&stack_a);
	ft_pa(&stack_b,&stack_a);
	printf("%d\n",stack_a->content);
	return (0);
}