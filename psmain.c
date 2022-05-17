#include "push_swap.h"

void	sort_string(int *str, int ac)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = 0;
	while (i < ac)
	{
		j = i;
		while (j < ac)
		{
			if (str[i] > str[j])
			{
				swap = str[i];
				str[i] = str[j];
				str[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	ft_strlen(int *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main (int ac, char **av)
{
	int i;
	t_list *stack_a;
	t_list *stack_b;
	int *str;

	stack_a = NULL;
	stack_b = NULL;
	str = NULL;
	i = 1;
	while (i < ac)
	{
		ft_creatlst(&stack_a, atoi(av[i]));
		i++;
	}
	str = malloc(ft_lstsize(stack_a) * sizeof(int));
	copy(stack_a, str);
	if (ft_lstsize(stack_a) == 2)
	{
		two(&stack_a);
		return (0);
	}
	else if (ft_lstsize(stack_a) <= 10)
	{
		sort10(&stack_a, &stack_b);
		three(&stack_a);
		while (ft_lstsize(stack_b)!= 0)
			pa(&stack_b, &stack_a);
		return (0);
	}
	else if (ft_lstsize(stack_a) <= 100)
	{
		sort100(&stack_a, &stack_b, str);
		return (0);
	}
	else if (ft_lstsize(stack_a) <= 500)
	{
		sort500(&stack_a, &stack_b, str);
		return (0);
	}
	return(0);
}

