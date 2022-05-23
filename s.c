void	max_case(t_list **a, t_list **b, t_sorted *info)
{
	while (!(info->adjust == 0 || ft_lstlast(*a)->content < (*b)->content))
	{
		rra(a, 1);
		info->adjust--;
	}
	pa(b, a, 1);
}

void	not_max_case(t_list **a, t_list **b, t_sorted *info)
{
	if ((*b)->content > ft_lstlast(*a)->content)
	{
		pa(b, a, 1);
		ra(a, 1);
		info->adjust++;
	}
	else
	{
		if (get_index_of_max(b) < ft_lstsize(*b) / 2)
			rb(b, 1);
		else
			rrb(b, 1);
	}
}

void	push_to_a(t_list **a, t_list **b, t_sorted *info)
{
	while (ft_lstsize(*b))
	{
		if (info->adjust == 0)
		{
			if ((*b)->content != max(b))
			{
				pa(b, a, 1);
				ra(a, 1);
				info->adjust++;
			}
			else
				pa(b, a, 1);
		}
		else if ((*b)->content == max(b))
			max_case(a, b, info);
		else
			not_max_case(a, b, info);
	}
	while (info->adjust)
	{
		rra(a, 1);
		info->adjust--;
	}
	printf("V : %d\n", info->adjust);
}