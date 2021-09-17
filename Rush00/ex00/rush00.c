/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejulio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:46:32 by ejulio            #+#    #+#             */
/*   Updated: 2021/09/05 14:14:07 by ejulio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char a);

void	support_1(int x)
{
	ft_putchar('o');
	while (x - 2 > 0)
	{
		ft_putchar('-');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	support_2(int x)
{
	ft_putchar('|');
	while (x - 2 > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	Y2;
	int	X2;

	i = 0;
	Y2 = y;
	X2 = x;
	while (y > 0)
	{
		if (y == 1 || y == Y2)
		{
			support_1(x);
			y--;
			x = X2;
		}
		else
		{
			support_2(x);
			y--;
			x = X2;
		}
	}
}
