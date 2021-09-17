/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:01:14 by lshonta           #+#    #+#             */
/*   Updated: 2021/09/07 19:06:08 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	result;

	if (nb < 2)
		return (nb);
	result = nb--;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
//int	main()
//{
//	printf("%d\n", ft_iterative_factorial(7));
//	return (0);
//}
