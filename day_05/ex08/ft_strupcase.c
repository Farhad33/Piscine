/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:51:58 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 15:52:49 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] > 96 && str[index] < 123)
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
