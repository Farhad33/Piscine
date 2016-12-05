/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 19:28:39 by mputsala          #+#    #+#             */
/*   Updated: 2016/11/13 22:06:32 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		check_rush00(char c, int cell_no, int nr_rows, int nr_cols)
{
	int row;
	int col;

	row = cell_no / nr_cols;
	col = cell_no % nr_cols;
	if ((row == 0 && col == 0) || (row == 0 && col == nr_cols - 1) || \
		(row == nr_rows - 1 && col == 0) || \
		(row == nr_rows - 1 && col == nr_cols - 1))
		return (c == 'o');
	if (row == 0 || row == nr_rows - 1)
		return (c == '-');
	if (col == 0 || col == nr_cols - 1)
		return (c == '|');
	return (c == ' ');
}

int		check_rush01(char c, int cell_no, int nr_rows, int nr_cols)
{
	int row;
	int col;

	row = cell_no / nr_cols;
	col = cell_no % nr_cols;
	if ((row == 0 && col == 0) || (row == nr_rows - 1 && col == nr_cols - 1))
		return (c == '/');
	if ((row == 0 && col == nr_cols - 1) || (row == nr_rows - 1 && col == 0))
		return (c == '\\');
	if (row == 0 || row == nr_rows - 1 || col == 0 || col == nr_cols - 1)
		return (c == '*');
	return (c == ' ');
}

int		check_rush02(char c, int cell_no, int nr_rows, int nr_cols)
{
	int row;
	int col;

	row = cell_no / nr_cols;
	col = cell_no % nr_cols;
	if (row == 0 && (col == 0 || col == nr_cols - 1))
		return (c == 'A');
	if (row == nr_rows - 1 && (col == 0 || col == nr_cols - 1))
		return (c == 'C');
	if (row == 0 || row == nr_rows - 1 || col == 0 || col == nr_cols - 1)
		return (c == 'B');
	return (c == ' ');
}

int		check_rush03(char c, int cell_no, int nr_rows, int nr_cols)
{
	int row;
	int col;

	row = cell_no / nr_cols;
	col = cell_no % nr_cols;
	if (col == 0 && (row == 0 || row == nr_rows - 1))
		return (c == 'A');
	if (col == nr_cols - 1 && (row == 0 || row == nr_rows - 1))
		return (c == 'C');
	if (row == 0 || row == nr_rows - 1 || col == 0 || col == nr_cols - 1)
		return (c == 'B');
	return (c == ' ');
}

int		check_rush04(char c, int cell_no, int nr_rows, int nr_cols)
{
	int row;
	int col;

	row = cell_no / nr_cols;
	col = cell_no % nr_cols;
	if ((row == 0 && col == 0) || (row == nr_rows - 1 && col == nr_cols - 1))
		return (c == 'A');
	if ((row == 0 && col == nr_cols - 1) || (row == nr_rows - 1 && col == 0))
		return (c == 'C');
	if (row == 0 || row == nr_rows - 1 || col == 0 || col == nr_cols - 1)
		return (c == 'B');
	return (c == ' ');
}
