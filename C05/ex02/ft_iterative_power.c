/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:35:36 by arnair            #+#    #+#             */
/*   Updated: 2022/08/14 15:10:56 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	while (power >= 1)
	{	
		res *= nb;
		power--;
		if (power == 0)
			return (res);
	}
	if (power == 0)
		return (res);
	else
		return (0);
}
