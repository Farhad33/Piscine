/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:22:25 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/03 16:27:00 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	char	*p;

	index = 0;
	while (src[index])
		index++;
	p = malloc(sizeof(*p) * (index + 1));
	index = 0;
	while (src[index])
	{
		p[index] = src[index];
		index++;
	}
	p[index] = '\0';
	return (p);
}
