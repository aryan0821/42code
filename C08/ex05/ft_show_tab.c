/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:35:06 by arnair            #+#    #+#             */
/*   Updated: 2022/08/22 11:53:19 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_put_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_put_number(int number)
{
	int	mod;

	mod = 0;
	if (number > 9)
		ft_put_number(number / 10);
	if (number > 0)
		mod = number % 10;
	write(1, &"0123456789"[mod], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_put_string(par[i].str);
		write(1, "\n", 1);
		ft_put_number(par[i].size);
		write(1, "\n", 1);
		ft_put_string(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
