/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 14:39:33 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/01 14:45:23 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		index;
	int		s1_length;
	int		s2_length;
	char	*p;

	p = s1;
	s1_length = 0;
	while (s1[s1_length])
		s1_length++;
	s2_length = 0;
	while (s2[s2_length])
		s2_length++;
	if (s2_length > s1_length)
		p = s2;
	index = 0;
	while (p[index] && n)
	{
		if (s1[index] < s2[index])
			return (-1);
		else if (s1[index] > s2[index])
			return (1);
		index++;
		n--;
	}
	return (0);
}
