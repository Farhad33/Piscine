/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 20:54:37 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/29 22:04:14 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int counter;

	counter = 1;
	while (counter < (nb / 2))
	{
		if ((counter * counter) == nb)
			return (counter);
		counter++;
	}
	return (0);
}

int		main(void)
{
	printf("%i", ft_sqrt(1024));
	return (0);
}
