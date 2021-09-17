/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:41:08 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/16 16:43:24 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*new_start;
	t_list	*tmp;

	if ((*begin_list) || ((*begin_list)->next))
	{
		new_start = ((void *)0);
		while (*begin_list)
		{
			tmp = (*begin_list)->next;
			(*begin_list)->next = new_start;
			new_start = *begin_list;
			*begin_list = tmp;
		}
		*begin_list = new_start;
	}
}
