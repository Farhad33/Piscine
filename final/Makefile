
IDIR= includes/

NAME= test

SRC= \
	ft_putchar\
	ft_putstr\
	ft_strlen\
	ft_putnbr

TARGET = ft_atoi.c
OBJS= *.o
LIBNAME = libfinal.a
CFILES = $(addprefix ./srcs/, $(addsuffix .c, $(SRC)))

CFLAGS= gcc -Wall -Werror -Wextra
RM= /bin/rm -f

all: $(NAME)

$(NAME):
	$(CFLAGS) -c $(CFILES) -I$(IDIR)
	ar rc $(LIBNAME) $(OBJS)
	ranlib $(LIBNAME)
	$(CFLAGS) $(TARGET) -I$(IDIR) -L. -lfinal -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBNAME)

re: fclean all
	$(RM) $(LIBNAME) $(OBJS)
