/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:58:46 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/14 14:18:57 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char	c);
void	ft_putnbr(int nbr);
void	ft_putstr(char	*str);
int		ft_separator(char	*str);
int		ft_any(char	**tab, int	(*f)(char*));

int main(void)
{
	char	*arr[4] = {""};

	if (ft_any(arr, &ft_separator))
		ft_putstr("1\n");
	else
		ft_putstr("0\n");
	return (0);
}
