/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:29:03 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/16 23:29:05 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	print_array(int **array, int size_y, int size_x)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size_y)
	{
		while (j < size_x)
		{
			ft_putnbr(array[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	ft_puterror(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}
