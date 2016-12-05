/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 15:42:17 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/29 23:43:55 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb <= 0)
		return (0);
	result = nb;
	while (1)
	{
		if (nb == 1)
			return (result);
		result *= (nb - 1);
		nb--;
	}
}
