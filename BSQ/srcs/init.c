#include "bsq.h"

void	init(t_bsq *b)
{
	b->x_start = 0;
	b->y_start = 0;
	b->start_check = 1;
	b->bol = 1;
	b->z = 0;
	b->xx = 0;
	b->yy = 0;
	b->zz = 0;
	b->x1 = 0;
	b->y1 = 0;
	b->z1 = 0;
}

void	ft_free(t_bsq *b)
{
	int i;

	i = b->y;
	while (i - 1 >= 0)
	{
		free(b->map[i]);
		i--;
	}
	free(b->map);
}
