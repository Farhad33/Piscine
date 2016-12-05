/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:51:20 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 19:52:22 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dest_i;

	dest_i = 0;
	while (dest[dest_i])
		dest_i++;
	i = 0;
	while (src[i])
	{
		dest[dest_i] = src[i];
		i++;
		dest_i++;
	}
	return (dest);
}
