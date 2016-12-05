/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 23:06:25 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 23:09:12 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dest_i;

	dest_i = 0;
	while (dest[dest_i])
		dest_i++;
	i = 0;
	while (src[i] && size)
	{
		i++;
		dest_i++;
		size--;
	}
	return (dest_i + 1);
}
