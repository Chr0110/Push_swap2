#include "push_swap.h"

int	howmuch100(t_list *stack_a, int j)
{
	int i;
	i = 0;
	int len;
	int small;
	len = ft_lstsize(stack_a);
	small = stack_a->content;
	while (len != 0 && stack_a->next != NULL)
	{
		if (small > j)
			stack_a = stack_a->next;
		else
		{
			stack_a = stack_a->next;
			i++;
		}
		small = stack_a->content;
		len--;
	}
	if (small < j)
		i++;
	return (i);
}

int	index100(t_list *stack_a, int j)
{
	int ind;
	int small;

	ind = 1;
	small = stack_a->content;
	while (ft_lstsize(stack_a) != 1)
	{
		if (small > j)
		{
			stack_a = stack_a->next;
			ind++;
		}
		else
			break;
		small = stack_a->content;
	}
	return (ind);
}

void	sort100(t_list **stack_a, t_list **stack_b)
{
	int len;
	int index;
	int j;
	int k;
	int h;

	len = ft_lstsize(*stack_a);
	k = ft_lstsize(*stack_a) / 4;
	h = howmuch100(*stack_a, k);
	while (ft_lstsize(*stack_a) != 0)
	{
		//printf("%d\n", k);
		while (h-- != 0)
		{
			index = index100(*stack_a, k);
			j = len - index + 1;
			if (index < (len / 2))
			while (index-- > 1)
				ra(stack_a);
			else
			{
				while(j-- > 0)
					rra(stack_a);
			}
			pb(stack_a, stack_b);
			len = ft_lstsize(*stack_a);
		}
		k = k + k;
		h = howmuch100(*stack_a, k);
		//printf("%d\n", h);
	}
}
int main (int ac, char **av)
{
	int i;
	t_list *stack_a;
	stack_a = NULL;
	t_list *stack_b;
	stack_b = NULL;
	i = 1;
	while (i < ac)
	{
		ft_creatlst(&stack_a, atoi(av[i]));
		i++;
	}
	sort100(&stack_a, &stack_b);
	ft_print(stack_b);
	return (0);
}