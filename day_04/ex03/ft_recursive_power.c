/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 19:35:28 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/29 21:42:59 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power <= 0)
		return (0);
	if (power == 1)
		return nb;
	power--;
	return nb * ft_recursive_power(nb, power);
}

int		main(void)
{
	printf("%i", ft_recursive_power(2, 4));
	return (0);
}
