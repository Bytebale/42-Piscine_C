/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:58:46 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/14 12:13:28 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c);
void	ft_putnbr(int nbr);
//void	ft_foreach(int	*tab, int	length, void(*f)(int));
void	ft_printtab(int	*tab, int	length);
int		ft_max(int	n);
int		*ft_map(int	*tab, int	length, int(*f)(int));

int main(void)
{
	int tab[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int	*arr;
//	ft_foreach(tab, 20, &ft_putnbr);
	arr = ft_map(tab, 17, &ft_max);
	ft_printtab(arr, 17);
	ft_putchar('\n');
	return (0);
}
