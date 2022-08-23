/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:50:08 by arnair            #+#    #+#             */
/*   Updated: 2022/08/06 19:53:59 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	element;
	int	j;

	i = 1;
	while (i < size)
	{
		element = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > element)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = element;
		i++;
	}
}
