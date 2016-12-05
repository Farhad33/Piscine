/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 23:26:14 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 19:26:46 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (to_find[match] == str[index + match])
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
