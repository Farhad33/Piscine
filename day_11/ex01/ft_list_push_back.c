/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:22:48 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/09 21:58:13 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = ft_create_elem(data);
	if (!(*begin_list))
	{
		*begin_list = temp;
		return ;
	}
	while ((*begin_list)->next)
	{
		begin_list = &(*begin_list)->next;
	}
	(*begin_list)->next = temp;
}
