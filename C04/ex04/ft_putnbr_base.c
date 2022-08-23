/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:18:55 by arnair            #+#    #+#             */
/*   Updated: 2022/08/14 11:12:12 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	str_len( char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

int	check(char *s1)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = i + 1;
		while (s1[j] != '\0')
		{
			if (str_len(s1) <= 1 || s1[i] == s1[j]
				|| s1[i] == '+' || s1[i] == '-')
			{
				write(1, "\0", 1);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		bs_size;
	int		new_num;
	char	digit;

	bs_size = str_len(base);
	new_num = 0;
	digit = '0';
	if (check(base) == 0)
	{
		if ((nbr < 0) && (bs_size > 1))
		{
			write(1, "-", 1);
			ft_putnbr_base((nbr *= -1), base);
		}
		else if (nbr >= bs_size)
		{
			new_num = nbr / bs_size;
			digit = base[nbr % bs_size];
			ft_putnbr_base(new_num, base);
			write(1, &digit, 1);
		}
		else
			write(1, &base[nbr], 1);
	}
}
