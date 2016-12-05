/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 22:05:54 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/29 23:34:00 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int check;
	int result;

	if (nb == 1 || nb == 0)
	   return (0);	
	result = 1;
	check = 2;
	while (check < nb)
	{
		if (nb % check  == 0)
			return result = 0;
		check++;	
	}
	return (result);
}

int		main(void)
{
	printf("%i", ft_is_prime(1));
	return (0);
}
