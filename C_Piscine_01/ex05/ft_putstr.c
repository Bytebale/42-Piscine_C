/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 09:02:14 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/03 18:49:25 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}
