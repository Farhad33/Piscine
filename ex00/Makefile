# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile_rush02                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imoran <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 20:58:51 by imoran            #+#    #+#              #
#    Updated: 2016/11/13 22:50:11 by mputsala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRCS = \
	ft_putchar.c\
	ft_putnbr.c\
	checking.c\
	rush.c\
	main.c

OBJS = \
	ft_putchar.o\
	ft_putnbr.o\
	checking.o\
	rush.o\
	main.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	gcc -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: 
	rm -f $(NAME)

re:
	fclean all

