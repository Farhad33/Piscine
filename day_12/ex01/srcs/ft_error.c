/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:03:47 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/10 23:03:57 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_error(int argc, int fd)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (fd == -1)
		ft_putstr("Error\n");
	else
		return (0);
	return (1);
}
