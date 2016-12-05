#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct	s_bsq
{
	int  x;
	int  y;
	int  z;
	int  xx;
	int  yy;
	int  zz;
	int  x1;
	int  y1;
	int  z1;
	int bol;
	int x_start;
	int y_start;
	int start_check;
	char ob;
	char sp;
	char full;
	char **map;
}				t_bsq;

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int num);
int		ft_strlen(char *str);
void	first_line(char *line, t_bsq *b);
void	read_line(char *argv, t_bsq *b);
int		read_file(char *argv, t_bsq *b);
void	print_map(t_bsq *b);
void	map_result(t_bsq *b);
void 	check_square(t_bsq *b);
void	init(t_bsq *b);
void	ft_free(t_bsq *b);
int		check_xy(t_bsq *b);

#endif
