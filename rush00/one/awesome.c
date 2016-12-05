/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:13:16 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/30 23:35:27 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	top(int x, char a, char b, char c, int i);
void	mid(int x, char a, char b, char c, int i);
void	bottom(int x, char a, char b, char c, int i);

int		rush(int x, int y, char a, char b, char c, int i)
{
	if (x <= 0 || y <= 0)
		return (0);
	top(x, a, b, c, i);
	ft_putchar('\n');
	while ((y - 2) > 0)
	{
		mid(x, a, b, c, i);
		ft_putchar('\n');
		y--;
	}
	if (y > 1)
		bottom(x, a, b, c, i);
	ft_putchar('\n');
	return (0);
}

void	top(int x, char a, char b, char c, int i)
{
	ft_putchar(a);
	while ((x - 2) > 0)
	{
		ft_putchar(b);
		x--;
	}
	if (x > 1)
	{
		if ( i == 1 || i == 3)
			ft_putchar(c);
		else
			ft_putchar(a);
	}
}

void	mid(int x, char a, char b, char c, int i)
{
	if (i)
		ft_putchar(b);
	else
		ft_putchar(c);
	while ((x - 2) > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
	{
		if (i)
			ft_putchar(b);
		else
			ft_putchar(c);
	}
}

void	bottom(int x, char a, char b, char c, int i)
{
	if (i == 1 || i == 2)
		ft_putchar(c);
	else
		ft_putchar(a);
	while ((x - 2) > 0)
	{
		ft_putchar(b);
		x--;
	}
	if (x > 1)
	{
		if (i == 2 || i == 3)
			ft_putchar(c);
		else
			ft_putchar(a);
	}
}
