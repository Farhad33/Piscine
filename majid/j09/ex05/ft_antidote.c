/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/22 23:12:22 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/22 23:20:44 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_antidote(int i, int j, int k)
{
	if ((i > k && i < j) || (i < k && i > j))
		return (i);
	else if ((j > k && j < i) || (j < k && j > i))
		return (j);
	return (k);
}
