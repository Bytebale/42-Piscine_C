/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:47:15 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/08 14:44:36 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	s;

	s = 0;
	while (str[s])
		s++;
	write(1, str, s);
}

int	main(int	size, char	*string[])
{
	int	i;

	i = size - 1;
	if (size > 1)
	{
		while (i > 0)
		{
			ft_putstr(string[i]);
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
