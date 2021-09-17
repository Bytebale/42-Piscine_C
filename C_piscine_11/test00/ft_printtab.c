/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:59:14 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/14 12:08:29 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);
void	ft_putnbr(int	nbr);

void	ft_printtab(int	*tab, int	length)
{
	int	i;

	i = 0;
	while(i < length)
	{
		ft_putnbr(tab[i++]);
		ft_putchar(' ');
	}
}
