/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:08:11 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/02 20:08:19 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;
	
	while (argc-- > 1)
	{
		index = 0;
		while (argv[argc][index])
		{
			ft_putchar(argv[argc][index]);
			index++;
		}
		ft_putchar('\n');
	}
	return (0);
}
