#include "push_swap.h"

void    copy(t_list *stack_a, int *str)
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

// int main (int ac, char **av)
// {
// 	int i;
// 	int *str;
// 	str = NULL;
// 	t_list *stack_a;
// 	stack_a = NULL;
// 	i = 1;
// 	while (i < ac)
// 	{
// 		ft_creatlst(&stack_a, atoi(av[i]));
// 		i++;
// 	}
// 	str = malloc(ft_lstsize(stack_a) * sizeof(int));
// 	copy(stack_a, str);
// 	i = 0;
// 	while (i < 100)
// 	{
// 		printf("%d\n", str[i]);
// 		i++;
// 	}
// 	printf("%d\n", ft_lstsize(stack_a));
// 	return (0);
// }
