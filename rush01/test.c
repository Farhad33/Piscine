
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	if (*str)
		return (ft_strlen(str + 1) + 1);
	return (0);
}

void	ft_putstr(char *str)
{
	write(1, str, 1);
	if (*str)
		ft_putstr(str +1);
	return;
}

int		main(void)
{
	char str[] = "majid";
	//printf("%i", ft_strlen("isis"));
	printf("%p\n", &str);
	ft_putstr(str);
	printf("\n%p", &str);	
	return (0);
}
