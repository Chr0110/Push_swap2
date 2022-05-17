#include "push_swap.h"

int	ft_check_integer(char *av)
{
	int i;
	i = ft_strlen(av);
	while (i-- > 0)
	{
		if (!(av[i] >= '0' && av[i] <= '9'))
			return (1);
	}
	return (0);
}

int ft_check_dupl(t_list *stack_a)
{
	int x;
	int y;
	int j = 0;

	t_list *temp1;
	t_list *temp2;
	int len;
	len = ft_lstsize(stack_a);
	temp1 = stack_a;
	temp2 = temp1;
	while(len-- > 0)
	{
		x = temp1->content;
		printf("%d\n", x);
		j = j + 1;
		len = ft_lstsize(stack_a) - j;
		while (len-- > 0)
		{
			y = temp2->next->content;
			if (x == y)
				return (1);
			else
				temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (0);
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
	ft_check_dupl(stack_a);
	return (0);
}