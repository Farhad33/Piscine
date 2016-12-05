
IDIR= includes/

NAME= bsq

SRC= \
			ft_putchar\
			ft_putnbr\
			ft_putstr\
			ft_strcmp\
			ft_strlen\
			read\
			check_square\
			print_map\
			init\
			error

OBJS= *.o
LIBNAME = libbsq.a
CFILES = $(addprefix ./srcs/, $(addsuffix .c, $(SRC)))

CFLAGS= gcc -Wall -Werror -Wextra
RM= /bin/rm -f

all: $(NAME)

$(NAME):
	$(CFLAGS) -c $(CFILES) -I$(IDIR)
	ar rc $(LIBNAME) $(OBJS)
	ranlib $(LIBNAME)
	$(CFLAGS) main.c -I$(IDIR) -L. -lbsq -o $(NAME) -g

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBNAME)

re: fclean all
