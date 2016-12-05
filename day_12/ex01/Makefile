NAME = libft.a

SRCS = \
		srcs/ft_print_file.c\
		srcs/ft_putstr.c\
		srcs/ft_error.c\
		srcs/ft_strlen.c\
		ft_cat.c

OBJS = \
		ft_print_file.o\
		ft_putstr.o\
		ft_error.o\
		ft_strlen.o\
		ft_cat.o

EXC = ft_cat


all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -Iincludes -c $(SRCS)
		gcc -Wall -Wextra -Werror -o $(EXC) -Iincludes $(OBJS)

clean:
		/bin/rm -f $(OBJS)

fclean:	clean
		/bin/rm -f $(EXC) $(OBJS)

re: fclean all
