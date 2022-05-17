#include "push_swap.h"

void	copy(t_list *stack_a, int *str)
{
	int i;
	i = 0;
	t_list *temp;
	temp = stack_a;
	while(i < ft_lstsize(stack_a))
	{
		str[i] = temp->content;
		temp = temp->next;
		i++;
	}
	sort_string(str, ft_lstsize(stack_a));
	return ;
}
