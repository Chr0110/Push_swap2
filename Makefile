NAME = Push_swap

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

CC = cc

AR = ar -rcs

OBJECT = *.o

FILES = creat_stack.c\
		ft_print_stack.c\
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

OBJS = $(subst .c,.o,$(FILES))

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(OBJECT)

clean :
	$(RM) $(OBJECT)
	
fclean : clean
	$(RM) $(NAME)
	
re : clean all
