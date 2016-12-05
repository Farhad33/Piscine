/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_header.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:29:26 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/16 23:29:29 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*read_header(char *str)
{
	char	*charact;
	int		i;

	i = 0;
	charact = (char*)malloc(sizeof(char) * 4);
	while (str[i] != '\n')
		i++;
	i--;
	charact[0] = str[i - 2];
	charact[1] = str[i - 1];
	charact[2] = str[i];
	charact[3] = '\0';
	return (charact);
}
