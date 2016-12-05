/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 19:24:30 by mputsala          #+#    #+#             */
/*   Updated: 2016/11/13 22:05:12 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		read_line(char *line)
{
	int i;

	i = 0;
	while (read(0, &line[i], 1) != 0)
	{
		if (line[i] != '\n')
			i++;
		else
		{
			line[i] = '\0';
			return (i);
		}
	}
	return (i);
}

char	**read_rectangle(int *rows_p, int *cols_p)
{
	char	**rectangle;
	char	*line;
	int		rows;
	int		cols;
	int		total_cols;

	rows = 0;
	cols = 0;
	total_cols = -1;
	line = malloc(10240);
	rectangle = malloc(sizeof(char *) * 10240);
	while ((cols = read_line(line)) != 0)
	{
		if (total_cols == -1)
			total_cols = cols;
		else if (total_cols != cols)
			return (NULL);
		rectangle[rows++] = line;
		line = malloc(10240);
	}
	*rows_p = rows;
	*cols_p = total_cols;
	return (rectangle);
}

int		check_rush(char **rectangle, int rows, int cols, \
		int (*check_cell)(char, int, int, int))
{
	int row;
	int col;

	if (rectangle == NULL)
		return (0);
	row = 0;
	while (row < rows)
	{
		col = 0;
		while (col < cols)
		{
			if (check_cell(rectangle[row][col], \
				row * cols + col, rows, cols) == 0)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
