/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 19:20:41 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/29 19:34:05 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int		main(void)
{
	printf("%i", ft_iterative_power(2, 4));
	return (0);
}
