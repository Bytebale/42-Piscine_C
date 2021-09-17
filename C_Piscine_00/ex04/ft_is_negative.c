/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:12:20 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/01 21:12:23 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int	n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n <= 0)
	{
		write (1, &negative, 1);
	}
	else
	{
		write (1, &positive, 1);
	}
}
