/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:27:19 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/03 18:07:19 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *p;
	int count;

	if (min >= max)
		return (p = 0);
	p = (int*)malloc(sizeof(int) * (max - min));
	count = 0;
	while (min < max)
	{
		p[count] = min;
		count++;
		min++;
	}
	return (p);
}
