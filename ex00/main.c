/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 19:28:22 by mputsala          #+#    #+#             */
/*   Updated: 2016/11/13 20:24:56 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(void)
{
	char	**rectangle;
	int		rows;
	int		cols;
	int		rush;

	rush = 0;
	rectangle = read_rectangle(&rows, &cols);
	if (check_rush(rectangle, rows, cols, check_rush00) == 1)
		rush = ft_printing(0, cols, rows, rush);
	if (check_rush(rectangle, rows, cols, check_rush01) == 1)
		rush = ft_printing(1, cols, rows, rush);
	if (check_rush(rectangle, rows, cols, check_rush02) == 1)
		rush = ft_printing(2, cols, rows, rush);
	if (check_rush(rectangle, rows, cols, check_rush03) == 1)
		rush = ft_printing(3, cols, rows, rush);
	if (check_rush(rectangle, rows, cols, check_rush04) == 1)
		rush = ft_printing(4, cols, rows, rush);
	if (!rush)
	{
		write(1, "aucune", 6);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

int		ft_printing(int i, int cols, int rows, int rush)
{
	if (rush)
		write(1, " || ", 5);
	write(1, "[rush-0", 7);
	ft_putnbr(i);
	write(1, "] ", 2);
	write(1, "[", 1);
	ft_putnbr(cols);
	write(1, "] ", 2);
	write(1, "[", 1);
	ft_putnbr(rows);
	write(1, "]", 2);
	rush = 1;
	return (rush);
}
