/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:58:46 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/14 15:42:27 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char	c);
void	ft_putnbr(int nbr);
int		ft_separator(char	*str);
void	ft_putstr(char	*str);
int		ft_count_if(char	**tab, int	length, int	(*f)(char*));

int main(void)
{
	char	*tab[5] = {"asdpomasd", "asdinasd", "", "asdndsf"};
	
	ft_putnbr(ft_count_if(tab, 22,  &ft_separator));
	ft_putchar('\n');
	return (0);
}
