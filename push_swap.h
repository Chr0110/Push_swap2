#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{	
	int			content;
	struct s_list	*next;
}	t_list;

int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_creatlst(t_list **stack_a, int t);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	ft_print(t_list *stack_a);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a,t_list **stack_b);
void    rrr(t_list **stack_a, t_list **stack_b);
void    rra(t_list **stack_a);
void    rrb(t_list **stack_b);
void	pa(t_list **stack_b,t_list **stack_a);
void	pb(t_list **stack_a,t_list **stack_b);
void    two(t_list **stack_a);
void    three(t_list **stack_a);
void    three1(t_list **stack_a, t_list **stack_b);
void    three2(t_list **stack_a, t_list **stack_b);
void    sort10(t_list **stack_a, t_list **stack_b);
int		index10(t_list *stack_a);
int		index25(t_list *stack_a);
void    sort100(t_list **stack_a, t_list **stack_b);;

#endif