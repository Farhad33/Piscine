#include "majid.h"

// void	ft_putnbr(int num)
// {
// 	int power;
// 	int num2;
//
// 	num2 = num;
// 	power = 1;
// 	while (num2 /= 10)
// 		power *= 10;
// 	while (num)
// 	{
// 		ft_putchar(num / power + '0');
// 		num %= power;
// 		power /= 10;
// 	}
//
// }
void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}
