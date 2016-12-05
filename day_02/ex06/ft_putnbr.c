/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 23:18:29 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/27 23:20:00 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int nb2;
	int length;

	length = 1;
	nb2 = nb;
	while ((nb2 /= 10) > 0)
	{
		length *= 10;
	}
	nb2 = nb;
	while (length)
	{
		ft_putchar((char)(nb2 / length) + 48);
		nb2 %= length;
		length /= 10;
	}
}

int		main(void)
{
	ft_putnbr(42);
	return (0);
}
