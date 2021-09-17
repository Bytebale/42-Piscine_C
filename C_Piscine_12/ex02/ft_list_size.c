/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:52:36 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/15 15:56:58 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	nbr;

	nbr = 0;
	while (begin_list)
	{
		nbr++;
		begin_list = begin_list -> next;
	}
	return (nbr);
}
