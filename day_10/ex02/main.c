void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int num);
int		*ft_map(int *tab, int length, int(*f)(int));

int		ft(int num)
{
	return num + 1;
}

int		main(void)
{
	int tab[] = {44, 15, 6, 3};
	ft_foreach( (ft_map(tab, 4, &ft)), 4, &ft_putnbr);
	return (0);
}
