#include "push_swap.h"

int main (int ac, char **av)
{
    int i;
    t_list *stack_a;
    i = 0;
    if (ac != 1)
    {
        while (i < ac)
        {
            ft_creatlst(&stack_a, atoi(av[i]));
            i++;
        }
    }
    else
        return (0);
    ft_print(stack_a);
    return (0);
}