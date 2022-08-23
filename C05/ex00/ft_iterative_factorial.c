/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:17:04 by arnair            #+#    #+#             */
/*   Updated: 2022/08/14 15:04:05 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0)
	{	
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
	res = 0;
	return (res);
}
