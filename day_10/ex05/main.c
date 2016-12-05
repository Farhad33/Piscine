#include <stdio.h>
void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int num);
int		*ft_map(int *tab, int length, int(*f)(int));
int     ft_is_sort(int *tab, int length, int(*f)(int, int));


int		ft(int num1, int num2)
{
	if (num1 < num2)
		return -1;
	if (num1 == num2)
		return 0;
	return 1;
}

int		main(void)
{
	int tab[] = {1, 2, 3, 4, 4};
	printf("%i\n", ft_is_sort(tab, 4, &ft));
	return (0);
}
