#include "push_swap.h"

int main (int ac, char **av)
{
	int i;
	t_list *stack_a;
	stack_a = NULL;
	t_list *stack_b;
	stack_a = NULL;
	i = 1;
	while (i < ac)
    {
		ft_creatlst(&stack_a, atoi(av[i]));
        i++;
    }
    if (ft_lstsize(stack_a) == 2)
    {
        two(&stack_a);
        return (0);
    }
	sort100(&stack_a, &stack_b);
	// three(&stack_a);
	// while (ft_lstsize(stack_b)!= 0)
	// 	pa(&stack_b, &stack_a);
	//ft_print(stack_a);
	//ft_print(stack_a);
	return(0);
}
//  TEST 0: OK       916  instructions  
//  TEST 1: OK       842  instructions  
//  TEST 2: OK       834  instructions  
//  TEST 3: OK       871  instructions  
//  TEST 4: OK       825  instructions  
//  TEST 5: OK       798  instructions  
//  TEST 6: OK       904  instructions  
//  TEST 7: OK       854  instructions  
//  TEST 8: OK       877  instructions  
//  TEST 9: OK       804  instructions  
//  TEST 10: OK       829  instructions  
//  TEST 11: OK       783  instructions  
//  TEST 12: OK       869  instructions  
//  TEST 13: OK       799  instructions  
//  TEST 14: OK       878  instructions  
//  TEST 15: OK       795  instructions  
//  TEST 16: OK       799  instructions  
//  TEST 17: OK       807  instructions  
//  TEST 18: OK       805  instructions  
//  TEST 19: OK       820  instructions  
//  TEST 20: OK       787  instructions  
//  TEST 21: OK       818  instructions  
//  TEST 22: OK       850  instructions  
//  TEST 23: OK       793  instructions  
//  TEST 24: OK       875  instructions  
//  TEST 25: OK       918  instructions  
//  TEST 26: OK       828  instructions^C
