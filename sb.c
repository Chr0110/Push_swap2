void ft_sa(t_list **stack_b)
{
	t_list *temp;
	if (!(*stack_b) || (*stack_b)->content == (*stack_b)->next->content || !(*stack_b)->next)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = temp;
	//printf("%d->\n",(*stack_b)->content);
}