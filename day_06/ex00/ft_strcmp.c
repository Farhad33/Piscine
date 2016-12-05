/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 12:41:37 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 14:22:11 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		index;
	int		s1_length;
	int		s2_length;
	char	*p;

	s1_length = 0;
	while (s1[s1_length])
		s1_length++;
	s2_length = 0;
	while (s2[s2_length])
		s2_length++;
	if (s2_length > s1_length)
		p = s2;
	else
		p = s1;
	index = 0;
	while (p[index])
	{
		if (s1[index] < s2[index])
			return (-1);
		else if (s1[index] > s2[index])
			return (1);
		index++;
	}
	return (0);
}
