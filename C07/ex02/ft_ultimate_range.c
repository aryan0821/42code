/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:27:44 by arnair            #+#    #+#             */
/*   Updated: 2022/08/21 10:59:31 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*mpt;
	int	i;

	i = 0;
	range = max - min;
	mpt = (int *) malloc(range * sizeof(int));
	if (mpt == NULL)
		exit(0);
	while (min < max)
	{
		mpt[i] = min;
		i++;
		min++;
	}
	return (mpt);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
