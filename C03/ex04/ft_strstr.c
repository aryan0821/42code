/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:44:25 by arnair            #+#    #+#             */
/*   Updated: 2022/08/13 10:49:05 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	offset;

	i = 0;
	offset = 0;
	if (to_find[offset] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + offset] == to_find[offset] && str[i + offset] != '\0')
			offset++;
		if (to_find[offset] == '\0')
			return (&str[i]);
		offset = 0;
		i++;
	}
	return (0);
}
