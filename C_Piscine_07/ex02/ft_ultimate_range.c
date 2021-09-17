/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:55:14 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/10 20:04:42 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	i;

	if (min >= max)
		return (NULL);
	*range = (int *)malloc(sizeof (int) * (max - min));
	if (range == ((void *)0))
		return (-1);
	i = 0;
	while (min < max)
		*range[i++] = min++;
	return (i);
	return (0);
}
