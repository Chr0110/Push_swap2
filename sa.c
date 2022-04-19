#include "push_swap.h"

void ft_creat_lst(t_list **stack_a, t_list *new_node, int t, int ac)
{
	int i;
	i = 1;
	new_node = (t_list*)malloc(sizeof(t_list));
	new_node->content = t;
	new_node->next = NULL;
	ft_lstadd_back(stack_a,new_node);
	
	while (i < ac)
	{
		t_list *new_node2;
		new_node2 = malloc(sizeof(t_list));
		new_node2->content = t;
		new_node2->next = NULL;
		ft_lstadd_back(stack_a, new_node2);
		i++;
		
	}

}
int main (int ac, char **av)
{
	int i;
	i = 1;
	t_list *stack_a;
	stack_a = NULL;
	t_list *new_node;
	new_node = (t_list*)malloc(sizeof(t_list));
	while (i < ac)
	{
		ft_creat_lst(&stack_a, new_node, atoi(av[i]), ac);
		i++;
	}
	printf("%d\n", stack_a->content);
	printf("%d\n", stack_a->next->content);
	printf("%d\n", stack_a->next->next->content);
	return (0);
}
