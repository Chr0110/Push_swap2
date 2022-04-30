#include <stdio.h>
#include <stdlib.h>
typedef struct s_list
{    
    int            content;
    struct s_list    *next;
}    t_list;
void    ft_ra(t_list **stack_a)
{
    t_list *last;
    t_list *hhh;
    last = *stack_a;
    while ((*stack_a) && (*stack_a)->next != NULL)
    {
        hhh->next = last;
        last = last->next;
    }
    hhh->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
}
void ft_creatlst(t_list **stack_a, int t)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    new->content = t;
    new->next = (*stack_a);
    ft_lstadd_back(stack_a, new);
}

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    if (ft_lstsize(*lst) != 0)
    {
        ft_lstlast(*lst)->next = new;
        new->next = NULL;
    }
    return ;
}

t_list    *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next != NULL)
    {
        lst = lst->next;
    }
    return (lst);
}

int    ft_lstsize(t_list *lst)
{
    int    i;
    i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}

void  ft_print_stack(t_list *stack_a)
{
  while (stack_a)
  {
    printf("%d->", stack_a->content);
    stack_a = stack_a->next;
  }
  return ;
}
int main (void)
{
    t_list *stack_a;
    int i;
    i = 0;
    int ac;
    ac = 4;
    while (i < ac)
    {
        ft_creatlst(&stack_a, i);
        i++;
    }
    ft_ra(&stack_a);
    ft_print_stack(stack_a);
    return (0);
}