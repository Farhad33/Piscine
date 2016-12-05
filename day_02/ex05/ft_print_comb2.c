/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 18:23:37 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/27 22:26:10 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;
	
	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (d++ <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(',');
		ft_putchar(' ');
		if (b == '8' && c == '9' && d == '9')
		{
			a++;
			b = '0';
			c = a + 1;
			d = b + 1;
		}
		if (c == '9' && d == '9')
		{
			b++;
			c = '0';
			d = b + 1;
		}
		if (d == '9' && a != '9')
		{
			c++;
			d = '0';
		}
	}
}
