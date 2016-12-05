/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:14:08 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/03 20:11:08 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%i.00 P.M. AND %i.00 P.M.", hour, (hour - 11));
	}
	else if (hour < 12 && hour > 0)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%i.00 A.M. AND %i.00 A.M.", hour, (hour + 1));
	}
	else if (hour > 12 && hour > 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%i.00 P.M. AND %i.00 P.M.", (hour - 12), (hour - 11));
	}
	else
		printf("wrong number");
	printf("\n");
}
