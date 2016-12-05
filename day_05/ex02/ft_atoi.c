/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 18:19:02 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/31 18:32:57 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int index;
	int result;

	index = 0;
	result = 0;
	if (str[0] == 45)
		index++;
	while (str[index] >= 47 && str[index] <= 57)
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	if (str[0] == 45)
		result = -result;
	return (result);
}
