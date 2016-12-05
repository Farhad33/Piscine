/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:28:07 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/16 23:28:12 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_atoi(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	return (number);
}
