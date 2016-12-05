/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:31:51 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/08 11:50:58 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int index;

	index = 1;
	while (index < length)
	{
		if (f(tab[index - 1], tab[index]) > 0)
			return (0);
		index++;
	}
	return (1);
}
			
