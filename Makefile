NAME = push_swap

CFLAGS = -Wall -Wextra -Werror 

RM = rm -f

CC = cc

AR = ar -rcs

OBJECT = *.o

FILES = creat_stack.c\
		push_a.c\
		push_b.c\
		rotate_a.c\
		rotate_b.c\
		rr.c\
		rra.c\
		rrb.c\
		rrr.c\
		ss.c\
		swap_a.c\
		swap_b.c\
		psmain.c\
		two.c\
		three.c\
		for10.c\
		for100.c\
		sort500.c\
		copy_to_string.c\
		check_arg.c\
		ft_sort_stack.c\
		ft_print_stack.c\
		max_last_a.c\

OBJS = $(subst .c,.o,$(FILES))

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) -fsanitize=address -g3 -o $(NAME) $(OBJECT)

clean :
	$(RM) $(OBJECT)
	
fclean : clean
	$(RM) $(NAME)
	
re : clean all
