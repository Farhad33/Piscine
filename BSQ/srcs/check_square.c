
#include "bsq.h"

void	check_z(t_bsq *b)
{
	int i;

	i = b->z1;
	while (i && b->bol)
	{
		if (b->map[b->y1][b->x1 - i] == b->ob ||
			b->map[b->y1 - i][b->x1] == b->ob)
			b->bol = 0;
		i--;
	}
}

void	check_ob(t_bsq *b)
{
	if (b->start_check)
	{
		b->start_check = 0;
		b->y1 = b->y_start;
		b->x1 = b->x_start;
	}
	if (b->zz < b->z1)
	{
		b->xx = b->x1;
		b->yy = b->y1;
		b->zz = b->z1;
	}
	b->z1++;
	b->x1++;
	b->y1++;
}

void	check_x(t_bsq *b)
{
	if ((b->x_start + 1 + b->zz) >= b->x)
	{
		b->y_start++;
		b->x_start = 0;
		b->y1 = b->y_start;
		b->x1 = b->x_start;
		b->z1 = 0;
		b->start_check = 1;
		b->bol = 1;
	}
}

void 	check_square(t_bsq *b)
{
	while ((b->y_start + 1 + b->zz) < b->y)
	{
		ft_putchar('\n');
		ft_putstr("b->x1 ");
		ft_putnbr(b->x1);
		ft_putchar('\n');
		ft_putstr("b->y1 ");
		ft_putnbr(b->y1);
		ft_putchar('\n');
		ft_putstr("b->zz ");
		ft_putnbr(b->zz);
		ft_putchar('\n');


		if (b->map[b->y1][b->x1] != b->ob)
			check_z(b);
		if (b->bol && b->map[b->y1][b->x1] != b->ob)
			check_ob(b);
		else
		{
			b->x_start++;
			b->y1 = b->y_start;
			b->x1 = b->x_start;
			b->z1 = 0;
			b->start_check = 1;
			b->bol = 1;
		}
		check_x(b);
	}
}
