+/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 13:06:23 by rlutt             #+#    #+#             */
/*   Updated: 2016/10/30 20:19:15 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		putchar(char c);
void	prntstrt(int x);
void	prntmdl(int x);
void	prntend(int x);

int		rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (1);
	}
	prntstrt(x);
	putchar('\n');
	while ((y - 2) > 0)
	{
		prntmdl(x);
		putchar('\n');
		y--;
	}
	if (y > 1)
	{
		prntend(x);
	}
	putchar('\n');
	return (0);
}

void	prntstrt(int x)
{
	putchar('A');
	while ((x - 2) > 0)
	{
		putchar('B');
		x--;
	}
	if (x > 1)
	{
		putchar('C');
	}
}

void	prntmdl(int x)
{
	putchar('B');
	while ((x - 2) > 0)
	{
		putchar(' ');
		x--;
	}
	if (x > 1)
	{
		putchar('B');
	}
}

void	prntend(int x)
{
	putchar('C');
	while ((x - 2) > 0)
	{
		putchar('B');
		x--;
	}
	if (x > 1)
	{
		putchar('A');
	}
}
