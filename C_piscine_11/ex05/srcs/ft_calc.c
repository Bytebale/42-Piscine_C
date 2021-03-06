/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:26:33 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/15 12:54:11 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
int	ft_sum(int	a, int	b);
int	ft_sub(int	a, int	b);
int	ft_mul(int	a, int	b);
int	ft_div(int	a, int	b);
int	ft_mod(int	a, int	b);

int	ft_calc(int	x, char	operator, int	y)
{
	int		i;
	t_cal	cal[5];

	cal[0].op = '+';
	cal[0].ft = ft_sum;
	cal[1].op = '-';
	cal[1].ft = ft_sub;
	cal[2].op = '*';
	cal[2].ft = ft_mul;
	cal[3].op = '/';
	cal[3].ft = ft_div;
	cal[4].op = '%';
	cal[4].ft = ft_mod;
	i = 0;
	while (i < 5)
	{
		if (operator == cal[i].op)
			return (cal[i].ft(x, y));
		i++;
	}
	return (0);
}
