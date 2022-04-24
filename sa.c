#include "push_swap.h"
void ft_sa(t_list *stack_a)
{
	t_list *temp;
	if (!stack_a || stack_a->content == stack_a->next->content || !stack_a->next)
		return ;
	temp = stack_a;
	stack_a = stack_a->next;
	stack_a->next = temp;
}
void ft_sb(t_list *stack_b)
{
	t_list *temp;
	if (!stack_b || stack_b->content == stack_b->next->content || !(stack_b->next))
		return ;
	temp = stack_b;
	stack_b = stack_b->next;
	stack_b->next = temp;
}
void ft_creatlst(t_list **stack_a, int t)
{
	t_list *new;
	new = malloc(sizeof(t_list));
	new->content = t;
	new->next = NULL;
	ft_lstadd_back(stack_a, new);
	return ;
}
int main (int ac, char **av)
{
	int i;
	t_list *stack_a;
	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		ft_creatlst(&stack_a, atoi(av[i]));
		i++;
	}
	ft_sa(stack_a);
	//printf("%d->",stack_a->content);
	return (0);
}
