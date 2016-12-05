/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:28:21 by mputsala          #+#    #+#             */
/*   Updated: 2016/11/13 21:58:12 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

char	**read_rectangle(int *rows_p, int *cols_p);
int		check_rush00(char c, int cell_no, int nr_rows, int nr_cols);
int		check_rush01(char c, int cell_no, int nr_rows, int nr_cols);
int		check_rush02(char c, int cell_no, int nr_rows, int nr_cols);
int		check_rush03(char c, int cell_no, int nr_rows, int nr_cols);
int		check_rush04(char c, int cell_no, int nr_rows, int nr_cols);
int		check_rush(char **rectangle, int rows, int cols, \
int		(*check_cell)(char, int, int, int));
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_printing(int i, int cols, int rows, int rush);
int		read_line(char *line);

#endif
