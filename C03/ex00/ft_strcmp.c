/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:47:05 by arnair            #+#    #+#             */
/*   Updated: 2022/08/11 16:40:38 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	offset;

	offset = 0;
	while (s1[offset] != '\0' || s2[offset] != '\0')
	{	
		if (s1[offset] > s2[offset])
			return (1);
		else if (s1[offset] < s2[offset])
			return (-1);
		offset++;
	}
	return (0);
}
