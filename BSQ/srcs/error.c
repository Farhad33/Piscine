#include "bsq.h"

int		check_xy(t_bsq *b)
{
	if (b->x < 1 || b->y < 1)
	{
		ft_putstr("Error");
		ft_putstr("\n");
		return (1);
	}
	return (0);
}
