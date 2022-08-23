/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:29:41 by arnair            #+#    #+#             */
/*   Updated: 2022/08/04 19:32:46 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	digits[2];

	digits[0] = 0;
	while (digits[0] <= 98)
	{
		digits[1] = digits[0];
		while (digits[1] < 99)
		{
			digits[1]++;
			ft_putchar((digits[0] / 10) + '0');
			ft_putchar((digits[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar((digits[1] / 10) + '0');
			ft_putchar((digits[1] % 10) + '0');
			if (digits[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		digits[0]++;
	}
}
