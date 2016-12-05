/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:04:11 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/10 23:04:14 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_print_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret < 1)
		{
			ft_putstr("Error\n");
			return (1);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}
