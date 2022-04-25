void ft_sa(t_list **stack_a)
{
	t_list *temp;
	if (!(*stack_a) || (*stack_a)->content == (*stack_a)->next->content || !(*stack_a)->next)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = temp;
	//printf("%d->\n",(*stack_a)->content);
}