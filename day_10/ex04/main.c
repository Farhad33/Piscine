#include <stdio.h>

int		ft_count_if(char **tab, int(*f)(char*));

int		contains_ws(char *str)
{
	if (*str)
	{
		if (*str == 'M')
			return (1);
		else
			return (contains_ws(str + 1));
	}
	return (0);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("ft_count_if return: %d\n", ft_count_if(argv, &contains_ws));
}
