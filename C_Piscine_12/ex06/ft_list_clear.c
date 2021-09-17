/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:02:04 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/16 14:59:50 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		tmp = list->next;
		if (list->data)
			free_fct(list->data);
		free(list);
		list = tmp;
	}
	*begin_list = ((void *)0);
}
