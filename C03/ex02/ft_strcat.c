/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:42:49 by arnair            #+#    #+#             */
/*   Updated: 2022/08/11 16:43:00 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[counter] != '\0')
	{
		dest[i + counter] = src[counter];
		counter++;
	}
	dest[i + counter] = '\0';
	return (dest);
}
