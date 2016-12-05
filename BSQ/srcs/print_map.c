#include "bsq.h"

void	map_result(t_bsq *b)
{
	int i;
	int j;

	j = b->zz;
	while (j >= 0)
	{
		i = b->zz;
		while (i >= 0)
		{
			b->map[b->yy - j][b->xx - i] = b->full;
			i--;
		}
		j--;
	}
	ft_putstr("\nprint has been compeleted \n");
}

void	print_map(t_bsq *b)
{
	int j;

	j = 0;
	while (b->map[j])
	{
	  ft_putstr(b->map[j]);
	  ft_putstr("\n");
	  j++;
	}
}
