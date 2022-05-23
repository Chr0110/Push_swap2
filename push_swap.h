/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:01:50 by eradi-            #+#    #+#             */
/*   Updated: 2022/05/23 05:57:06 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{	
	int				content;
	struct s_list	*next;
}	t_list;

typedef struct s_ind
{
	int	k;
}	t_ind;

int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_creatlst(t_list **stack_a, int t);
int		ft_dupl(int ac, char **av);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	ft_print(t_list *stack_a);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	two(t_list **stack_a);
void	three(t_list **stack_a);
void	sort10(t_list **stack_a, t_list **stack_b);
int		index10(t_list *stack_a);
int		index100again(t_list *stack_b);
int		check_sort(int ac, char **av);
int		index100(t_list *stack_a, int key);
void	sort100(t_list **stack_a, t_list **stack_b, int *str, t_ind *ind);
void	sort100again(t_list **stack_b, t_list **stack_a, t_ind *ind);
int		max_in_100(t_list *stack_b);
int		index500again(t_list *stack_b);
int		index500(t_list *stack_a, int key);
void	sort500(t_list **stack_a, t_list **stack_b, int *str, t_ind *ind);
void	sort500again(t_list **stack_b, t_list **stack_a, t_ind *ind);
int		max_in_500(t_list *stack_b);
void	sort_string(int *str, int ac);
int		ft_strlen(char *str);
void	copy(t_list *stack_a, int *str);
int		ft_check_integer(int ac, char **av);
void	ft_sort_stack(t_list *stack_a, int *str, t_ind *ind);
void	max_last_a(t_list **stack_a, t_list **stack_b, t_ind *ind);
void	not_max_last_a(t_list **stack_a, t_list **stack_b, t_ind *ind);
#endif