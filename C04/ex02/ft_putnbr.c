/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:15:01 by arnair            #+#    #+#             */
/*   Updated: 2022/08/13 12:43:22 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	mod;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		mod = (nb % 10) + '0';
		nb /= 10;
		ft_putnbr(nb);
		write(1, &mod, 1);
	}
	else
	{
		mod = nb + '0';
		write(1, &mod, 1);
	}
}
