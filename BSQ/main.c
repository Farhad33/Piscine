#include "bsq.h"

int		main(int argc, char **argv)
{
	int i;
	t_bsq b;

	i = 1;
	while (argc > i)
	{

		init(&b);

		if (read_file(argv[i], &b))
			return (1);
		// check_square(&b);
		// map_result(&b);
		print_map(&b);
		i++;
	}
	return (0);
}
