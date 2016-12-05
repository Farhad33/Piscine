/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 19:47:36 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/29 21:06:17 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (0);
	else if (index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}

int		main(void)
{
	printf("%i", ft_fibonacci(8));
	return (0);
}
