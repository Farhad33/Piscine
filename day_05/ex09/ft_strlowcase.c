/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:00:29 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 16:00:31 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] > 64 && str[index] < 91)
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}
