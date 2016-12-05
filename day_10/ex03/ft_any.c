/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:57:07 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/08 00:05:10 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	while (*tab)
	{
		if (f(*tab) == 1)
			return (1);
		tab++;
	}
	return (0);
}
