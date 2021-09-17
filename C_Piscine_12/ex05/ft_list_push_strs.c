/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:58:53 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/15 17:01:28 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int	size, char	**strs)
{
	t_list	*tmp;
	t_list	*list;
	int		i;

	i = 1;
	list = ft_create_elem(strs[0]);
	tmp = list;
	while (i < size)
	{
		list = ft_create_elem(strs[i]);
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}
