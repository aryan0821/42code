/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:51:14 by arnair            #+#    #+#             */
/*   Updated: 2022/08/16 08:53:46 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*ptr;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = (char *) malloc (i * sizeof(char));
	ptr = dup;
	i = 0;
	while (src[i])
	{
		*dup = src[i];
		i++;
		dup++;
	}
	*dup = '\0';
	return (ptr);
}
