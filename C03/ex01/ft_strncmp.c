/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:27:31 by arnair            #+#    #+#             */
/*   Updated: 2022/08/13 10:53:16 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	offset;
	int				i;

	i = 0;
	offset = 0;
	while ((s1[offset] != '\0' || s2[offset] != '\0') && (offset < n))
	{	
		if (s1[offset] > s2[offset])
		{	
			i = s1[offset] - s2[offset];
			return (i);
		}
		else if (s1[offset] < s2[offset])
		{
			i = s1[offset] - s2[offset];
			return (i);
		}
		offset++;
	}
	return (i);
}
