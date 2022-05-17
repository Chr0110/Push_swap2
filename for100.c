
#include "push_swap.h"

int	index100again(t_list *stack_b)
{
	int max;
	int ind;
	t_list *x;
	t_list *temp;
	ind = 1;
	temp = stack_b;
	max = (stack_b)->content;
	while (ft_lstsize(stack_b) != 1)
	{
		x = (stack_b)->next;
		if (max <= x->content)
		{
			max = x->content;
			stack_b = stack_b->next;
		}
		else
			stack_b = stack_b->next;
	}
	while (max != temp->content)
	{
		ind++;
		temp = temp->next;
	}
	return (ind);
}

void	sort100again(t_list **stack_b, t_list **stack_a)
{
	int len;
	int index;
	int j;

	len = ft_lstsize(*stack_b);
	index = index100again(*stack_b);
	while (len > 1)
	{
		j = len - index + 1;
		if (index <= (len / 2))
			while (index-- > 1)
				rb(stack_b);
		else
		{
			while(j-->0)
				rrb(stack_b);
		}
		pa(stack_b, stack_a);
		len = ft_lstsize(*stack_b);
		index = index100again(*stack_b);
	}	
	pa(stack_b, stack_a);
	return ;
}

int	howmuch100(t_list *stack_a, int key)
{
	int i;
	i = 0;
	int len;
	int small;
	len = ft_lstsize(stack_a);
	small = stack_a->content;
	while (len != 0 && stack_a->next != NULL)
	{
		if (small > key)
			stack_a = stack_a->next;
		else
		{
			stack_a = stack_a->next;
			i++;
		}
		small = stack_a->content;
		len--;
	}
	if (small < key)
		i++;
	return (i);
}

int	index100(t_list *stack_a, int key, int *str)
{
	int ind;
	int small;
	int rep;
	int j = 4;

	ind = 1;
	small = stack_a->content;
	while (ft_lstsize(stack_a) != 1)
	{
		rep = howmuch100(stack_a, key);
		// printf("this is key %d\n", key);
		// printf("this is rep %d\n", rep);
		// printf("this is j %d\n", j);
		if (small >= key)
		{
			stack_a = stack_a->next;
			ind++;
		}
		else
			return(ind);
		small = stack_a->content;
		if (rep == 0)
		{
			j = j - 1;
			copy(stack_a, str);
			key = str[ft_lstsize(stack_a) / j];
			small = stack_a->content;
		}
	}
	return (ind);
}

void	sort100(t_list **stack_a, t_list **stack_b, int *str)
{
	int len;
	int index;
	int j;
	int key;
	len = ft_lstsize(*stack_a);
	key = str[len / 4];
	while (ft_lstsize(*stack_a) != 0)
	{
		index = index100(*stack_a, key, str);
		j = len - index + 1;
		if (index <= (len / 2))
			while (index-- > 1)
				ra(stack_a);
		else
			while(j-- > 0)
				rra(stack_a);
		pb(stack_a, stack_b);
		len = ft_lstsize(*stack_a);
	}
	ft_print(*stack_b);
	printf("%d\n", ft_lstsize(*stack_b));
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
// 	printf("%d\n", howmuch100(stack_a, 52));
// 	return (0);
// }