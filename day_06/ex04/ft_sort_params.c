/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:38:52 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/02 23:39:39 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	int		index;
	int		i;
	char	temp[10000] = {0};

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + i]) > 0)
		{
			ft_strcpy(temp, argv[i + 1]);
			ft_strcpy(argv[i + 1], argv[i]);
			ft_strcpy(argv[i], temp);
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (argv[i])
	{
		index = 0;
		while (argv[i][index])
		{
			ft_putchar(argv[i][index]);
			index++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
