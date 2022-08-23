/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:43:59 by arnair            #+#    #+#             */
/*   Updated: 2022/08/13 10:56:40 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	counter;

	counter = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[counter] != '\0' && counter != nb)
	{
		dest[i + counter] = src[counter];
		counter++;
	}
	dest[i + counter] = '\0';
	return (dest);
}
