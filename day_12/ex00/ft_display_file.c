/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:46:56 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/10 20:23:30 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

int		ft_strlen(char *str)
{
	if (*str)
		return (ft_strlen(str + 1) + 1);
	return (0);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_error(int argc, int fd)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments!\n");
	else if (fd == -1)
		ft_putstr("Error\n");
	else
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (ft_error(argc, fd))
		return (1);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret < 1)
		{
			ft_putstr("we got an error\n");
			return (1);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("You can't close!\n");
		return (1);
	}
	return (0);
}
