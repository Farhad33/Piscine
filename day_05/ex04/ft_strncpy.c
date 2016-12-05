/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 19:55:09 by marahimi          #+#    #+#             */
/*   Updated: 2016/10/31 20:25:08 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (src[index] && n)
	{
		dest[index] = src[index];
		index++;
		n--;
	}
	dest[index] = '\0';
	return (dest);
}
