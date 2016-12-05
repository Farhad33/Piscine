/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 20:38:15 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/10 20:42:38 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int		fd;

	fd = 0;
	ft_error(argc, fd);
	argv++;
	while (*argv)
	{
		fd = open(*argv, O_RDONLY);
		if (ft_error(argc, fd))
			return (1);
		if (ft_print_file(fd))
			return (1);
		if (close(fd) == -1)
		{
			ft_putstr("You can't close!\n");
			return (1);
		}
		argv++;
	}
	return (0);
}
