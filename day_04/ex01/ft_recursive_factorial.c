/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 17:38:43 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/29 19:20:17 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int result;

	result = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	return (result *= ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	printf("%i", ft_recursive_factorial(5));
	return (0);
}
