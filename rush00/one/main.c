/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 14:17:59 by rlutt             #+#    #+#             */
/*   Updated: 2016/10/30 23:19:41 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printdash(void);
int		rush(int x, int y, char a, char b, char c, int i);

int		main(void)
{
	rush(5, 3, 'o', '-', '|', 0);
	write(1, "\n", 1);
	rush(5, 1, 'o', '-', '|', 0);
	write(1, "\n", 1);
	rush(1, 1, 'o', '-', '|', 0);
	write(1, "\n", 1);
	rush(1, 5, 'o', '-', '|', 0);
	write(1, "\n", 1);
	rush(4, 4, 'o', '-', '|', 0);
	printdash();
	rush(5, 3, '/', '*', '\\', 1);
	write(1, "\n", 1);
	rush(5, 1, '/', '*', '\\', 1);
	write(1, "\n", 1);
	rush(1, 1, '/', '*', '\\', 1);
	write(1, "\n", 1);
	rush(1, 5, '/', '*', '\\', 1);
	write(1, "\n", 1);
	rush(4, 4, '/', '*', '\\', 1);
	printdash();
	rush(5, 3, 'A', 'B', 'C', 2);
	write(1, "\n", 1);
	rush(5, 1, 'A', 'B', 'C', 2);
	write(1, "\n", 1);
	rush(1, 1, 'A', 'B', 'C', 2);
	write(1, "\n", 1);			
	rush(1, 5, 'A', 'B', 'C', 2);
	write(1, "\n", 1);
	rush(4, 4, 'A', 'B', 'C', 2);
	printdash();
	rush(5, 3, 'A', 'B', 'C', 3);
	write(1, "\n", 1);
	rush(5, 1, 'A', 'B', 'C', 3);
	write(1, "\n", 1);
	rush(1, 1, 'A', 'B', 'C', 3);
	write(1, "\n", 1);
	rush(1, 5, 'A', 'B', 'C', 3);
	write(1, "\n", 1);
	rush(4, 4, 'A', 'B', 'C', 3);
	printdash();
	rush(5, 3, 'A', 'B', 'C', 1);
	write(1, "\n", 1);
	rush(5, 1, 'A', 'B', 'C', 1);
	write(1, "\n", 1);
	rush(1, 1, 'A', 'B', 'C', 1);
	write(1, "\n", 1);
	rush(1, 5, 'A', 'B', 'C', 1);
	write(1, "\n", 1);
	rush(4, 4, 'A', 'B', 'C', 1);
	write(1, "\n", 1);

	return (0);
}

void printdash(void)
{
	int i;

	write(1, "\n", 1);
	i = 50;
	while(i--)
	{
		write(1, "-", 1);
	}
	write(1, "\n", 1);

}
