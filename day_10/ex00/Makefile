NAME = libft.a

SRCS = \
		srcs/ft_putchar.c\
		srcs/ft_putstr.c\
		srcs/ft_strcmp.c\
		srcs/ft_strlen.c\
		srcs/ft_swap.c

OBJS = \
		ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c -Iincludes $(SRCS)
		ar rc $(NAME) $(OBJS)

clean:
		/bin/rm -f $(OBJS)

fclean:	clean
		/bin/rm -f $(NAME)

re: fclean all
