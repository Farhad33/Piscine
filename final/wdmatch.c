#include "majid.h"

int		main(int argc, char **argv)
{
	int i;
	int j;

	(void)argc;
	if (argc != 3)
	{
		ft_putstr("\n");
		return (0);
	}

	i = 0;
	j = 0;
	while (argv[2][i])
	{
		if ((argv[2][i] == argv[1][j]) && argv[1][j])
			j++;
		i++;
	}
	if (!(argv[1][j]))
		ft_putstr(argv[1]);
	ft_putstr("\n");
	return (0);
}
