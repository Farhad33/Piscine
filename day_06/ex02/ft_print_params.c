/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:56:28 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/02 20:45:30 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;
	int argv_index;

	argv_index = 1;
	while (argc-- > 1)
	{
		index = 0;
		while (argv[argv_index][index])
		{
			ft_putchar(argv[argv_index][index]);
			index++;
		}
		argv_index++;
		ft_putchar('\n');
	}
	return (0);
}
