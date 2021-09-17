/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:43:34 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/10 20:05:27 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int	min, int	max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	i = min;
	range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[min - i] = min;
		min++;
	}
	return (range);
}
