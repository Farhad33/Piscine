/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:54:12 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 16:54:46 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int check;

	check = 1;
	i = 0;
	while (str[i])
	{
		if (check && str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
			check = 0;
		}
		if (str[i] == ' ' || str[i] == 45 || str[i] == 43)
			check = 1;
		else
			check = 0;
		i++;
	}
	return (str);
}
