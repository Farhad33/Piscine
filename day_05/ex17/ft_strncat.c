/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 22:21:02 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 22:22:16 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int dest_i;

	dest_i = 0;
	while (dest[dest_i])
		dest_i++;
	i = 0;
	while (src[i] && nb)
	{
		dest[dest_i] = src[i];
		i++;
		dest_i++;
		nb--;
	}
	dest[dest_i] = '\0';
	return (dest);
}
