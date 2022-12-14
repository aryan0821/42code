/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:12:17 by arnair            #+#    #+#             */
/*   Updated: 2022/08/16 11:16:19 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (i <= nb / 2)
	{
		i += 2;
		if (nb % i == 0)
		{
			nb += 2;
			i = 1;
		}
	}
	return (nb);
}
