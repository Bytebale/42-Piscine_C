/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:29:41 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/15 12:48:51 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	check(char	op, int	b)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

void	ft_do_op(int argc, char *argv[])
{
	if (check(argv[2][0], ft_atoi(argv[3])) && (argc == 4))
	{
		ft_putnbr((ft_calc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]))));
		ft_putchar('\n');
	}
}
