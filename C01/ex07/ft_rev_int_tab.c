/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:04:27 by arnair            #+#    #+#             */
/*   Updated: 2022/08/07 13:06:50 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	temp;

	j = 0;
	size--;
	while (j <= size)
	{
		temp = tab[size];
		tab[size] = tab[j];
		tab[j] = temp;
		size--;
		j++;
	}
}
