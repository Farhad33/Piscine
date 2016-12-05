/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:19:52 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/04 16:50:27 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		is_equal(char c1, char c2)
{
	if (c1 >= 65 && c1 <= 90)
		c1 = c1 + 32;
	if (c2 >= 65 && c2 <= 90)
		c2 = c2 + 32;
	if (c1 == c2)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int match;
	int length;

	index = 0;
	match = 0;
	length = 0;
	while (to_find[length])
		length++;
	if (length == 0)
		return (str);
	while (str[index])
	{
		while (is_equal(to_find[match], str[index + match]))
		{
			if (match == length - 1)
				return (str + index);
			match++;
		}
		match = 0;
		index++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*target[3];

	target[0] = "president";
	target[1] = "attack";
	target[2] = "powers";
	while (argc-- > 1)
	{
		i = 0;
		while (i <= 2)
		{
			if (ft_strstr(argv[argc], target[i]) != 0)
				ft_putstr("Alert!!!");
			i++;
		}
	}
	return (0);
}
