/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:15:53 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/06 18:58:39 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
** #include <stdio.h>
** int	main(void)
** {
** 	char	str[] = {"asmdskf"};
**
** 	printf("%d\n", ft_strlen(str));
** 	return (0);
** }
*/
