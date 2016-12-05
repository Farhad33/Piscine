/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:55:57 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/07 18:56:17 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int nb2;
	int power;

	power = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	nb2 = nb;
	while ((nb2 /= 10) > 0)
		power *= 10;
	while (power)
	{
		ft_putchar((nb / power) + '0');
		nb %= power;
		power /= 10;
	}
}
