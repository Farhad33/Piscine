/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 13:06:23 by rlutt             #+#    #+#             */
/*   Updated: 2016/10/30 20:18:10 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	prntstrt(int x);
void	prntmdl(int x);

int		rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	prntstrt(x);
	ft_putchar('\n');
	while ((y - 2) > 0)
	{
		prntmdl(x);
		ft_putchar('\n');
		y--;
	}
	if (y > 1)
	{
		prntstrt(x);
	}
	ft_putchar('\n');
	return (0);
}

void	prntstrt(int x)
{
	ft_putchar('o');
	while ((x - 2) > 0)
	{
		ft_putchar('-');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
}

void	prntmdl(int x)
{
	ft_putchar('|');
	while ((x - 2) > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
}
