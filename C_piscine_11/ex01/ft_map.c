/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:23:35 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/15 13:07:45 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	*ft_map(int	*tab, int	length, int(*f)(int))
{
	int	*mytab;
	int	i;

	mytab = (int *)malloc(sizeof (*tab) * length)
		if mytab == (NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		mytab[i] = f(tab[i]);
		i++;
	}
	return (mytab);
}
