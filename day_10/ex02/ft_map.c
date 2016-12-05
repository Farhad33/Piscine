/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:25:58 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/07 22:21:11 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*majid)(int))
{
	int *p;
	int index;

	p = (int*)malloc(sizeof(*p) * (length));
	index = 0;
	while (length--)
	{
		p[index] = majid(tab[index]);
		index++;
	}
	return p;
}
