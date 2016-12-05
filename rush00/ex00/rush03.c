/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:13:16 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/30 20:18:54 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	abc(int x);
void	b(int x);

int		rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	abc(x);
	ft_putchar('\n');
	while ((y - 2) > 0)
	{
		b(x);
		ft_putchar('\n');
		y--;
	}
	if (y > 1)
	{
		abc(x);
	}
	ft_putchar('\n');
	return (0);
}

void	abc(int x)
{
	ft_putchar('A');
	while ((x - 2) > 0)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	b(int x)
{
	ft_putchar('B');
	while ((x - 2) > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
}
