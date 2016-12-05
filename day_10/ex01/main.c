void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int num);

int		main(void)
{
	int tab[] = {44, 15, 6, 3};
	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}
