#include "push_swap.h"


t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (ft_lstsize(*lst) != 0)
	{
		ft_lstlast(*lst)->next = new;
		new->next = NULL;
	}
	return ;
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
// int main (int ac, char **av)
// {
// 	int i;
// 	t_list *stack_a;
// 	stack_a = NULL;
// 	i = 1;
// 	while (i < ac)
// 	{
// 		ft_creatlst(&stack_a, atoi(av[i]));
// 		i++;
// 	}
// 	ft_print(stack_a);
// 	return (0);
// }
