#include "push_swap.h"
void ft_checklst(t_list *stack_a)
{
	printf("%d\n",(stack_a)->content);
	printf("%d\n", stack_a->next->content);
	printf("%d\n", stack_a->next->next->content);
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
	ft_checklst(stack_a);
	return (0);
}
