
#include "bsq.h"

void 	check_square(t_bsq *bsq)
{
	int x;
	int y;
	int z;
	int i;
	int bol;
	int start;
	int start_check;

	start_check = 1;
	bol = 1;
	x = 0;
	y = 0;
	z = 0;
	i = 0;
	bsq->z = 0;
	bsq->xx = 0;
	bsq->yy = 0;
	bsq->zz = 0;
	start = 0;
	while (y < bsq->y)
	{
		ft_putstr("while");
		ft_putstr("\n");
		if (bsq->map[y][x] != bsq->ob)
		{
			ft_putstr(" not ob ");
			i = z;
			while (i && bol)
			{
				ft_putstr("\n");
				ft_putstr("firstxx");

				if (bsq->map[y][x - i] == bsq->ob)
				{
					ft_putstr("\n");
					ft_putstr("first");
					ft_putchar('\n');
					ft_putstr(" ob! ");
					bol = 0;
				}
				i--;
			}
			i = z;
			while (i && bol)
			{
				ft_putstr("\n");
				ft_putstr("secondxx");

				if (bsq->map[y - i][x] == bsq->ob)
				{
					ft_putstr("\n");
					ft_putstr("second");
					ft_putchar('\n');
					ft_putstr(" ob! ");
					bol = 0;
				}
				i--;
			}
		}
		if (bol && bsq->map[y][x] != bsq->ob)
		{
			if (start_check)
			{
				start = y;
				start_check = 0;
			}
			if (bsq->zz < z)
			{
				bsq->xx = x;
				bsq->yy = y;
				bsq->zz = z;
			}
			z++;
			x++;
			y++;
		}
		else
		{
			start_check = 1;
			x++;
			z = 0;
			y = start;
			bol = 1;
		}
		if (x >= bsq->x)
		{
			start++;
			x = 0;
			z = 0;
			bol = 1;
		}
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putstr("start ");
		ft_putnbr(start);
		ft_putchar('\n');
		ft_putstr("y ");
		ft_putnbr(y);
		ft_putchar('\n');
		ft_putstr("x ");
		ft_putnbr(x);
		ft_putchar('\n');
		ft_putstr("z ");
		ft_putnbr(x);
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putstr("xx ");
		ft_putnbr(bsq->xx);
		ft_putchar('\n');
		ft_putstr("yy ");
		ft_putnbr(bsq->yy);
		ft_putchar('\n');
		ft_putstr("zz ");
		ft_putnbr(bsq->zz);
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putstr("==================== ");
		ft_putchar('\n');


	}
	ft_putchar('\n');
	ft_putstr("bsq->x ");
	ft_putnbr(bsq->x);
	ft_putchar('\n');
	ft_putstr("bsq->y ");
	ft_putnbr(bsq->y);
	ft_putchar('\n');

}

void	map_result(t_bsq *bsq)
{
	int i;
	int j;

	j = bsq->zz;
	while (j >= 0)
	{
		i = bsq->zz;
		while (i >= 0)
		{
			bsq->map[bsq->yy - j][bsq->xx - i] = bsq->full;
			i--;
		}
		j--;
	}
}

void	print_map(t_bsq *bsq)
{
	int j;

	j = 0;
	while (bsq->map[j])
	{
	  ft_putstr(bsq->map[j]);
	  ft_putstr("\n");
	  j++;
	}
}





ft_putchar('\n');
ft_putstr("bsq->x ");
ft_putnbr(bsq->x);
ft_putchar('\n');
ft_putstr("bsq->y ");
ft_putnbr(bsq->y);
ft_putchar('\n');










#include "bsq.h"

void 	check_square(t_bsq *bsq)
{
	int x;
	int y;
	int z;
	int i;
	int bol;
	int start;
	int start_check;
	ft_putstr("\n begining of check_square \n");

	start_check = 1;
	bol = 1;
	x = 0;
	y = 0;
	z = 0;
	i = 0;
	bsq->z = 0;
	bsq->xx = 0;
	bsq->yy = 0;
	bsq->zz = 0;
	start = 0;
	while (y < bsq->y)
	{
		if (bsq->map[y][x] != bsq->ob)
		{
			i = z;
			while (i && bol)
			{
				if (bsq->map[y][x - i] == bsq->ob ||
					bsq->map[y - i][x] == bsq->ob)
					bol = 0;
				i--;
			}
		}
		if (bol && bsq->map[y][x] != bsq->ob)
		{
			if (start_check)
			{
				start = y;
				start_check = 0;
			}
			if (bsq->zz < z)
			{
				bsq->xx = x;
				bsq->yy = y;
				bsq->zz = z;
			}
			z++;
			x++;
			y++;
		}
		else
		{
			start_check = 1;
			x++;
			z = 0;
			y = start;
			bol = 1;
		}
		if (x >= bsq->x)
		{
			start++;
			x = 0;
			z = 0;
			bol = 1;
		}
	}
	ft_putstr("\n end of check_square \n");
}

void	map_result(t_bsq *bsq)
{
	int i;
	int j;

	j = bsq->zz;
	while (j >= 0)
	{
		i = bsq->zz;
		while (i >= 0)
		{
			bsq->map[bsq->yy - j][bsq->xx - i] = bsq->full;
			i--;
		}
		j--;
	}
}

void	print_map(t_bsq *bsq)
{
	int j;

	j = 0;
	while (bsq->map[j])
	{
	  ft_putstr(bsq->map[j]);
	  ft_putstr("\n");
	  j++;
	}
}
