/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:17:42 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/07 19:04:13 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int	nb)
{
	if (nb < 2)
		return (1);
	if ((nb > 1) && (nb < 12))
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
//int	main()
//{
//	printf("%d\n", ft_recursive_factorial(5));
//	return(0);
//}
