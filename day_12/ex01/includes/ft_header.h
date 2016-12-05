/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:05:42 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/10 23:06:56 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# define BUF_SIZE 32768

int		ft_error(int argc, int fd);
int		ft_print_file(int fd);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
