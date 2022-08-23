/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:00:41 by arnair            #+#    #+#             */
/*   Updated: 2022/08/11 09:31:15 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//return 0 if alphabet.
int	check_char_alpha(char *s, int i)
{
	int	res;

	res = 0;
	if ((s[i] >= '0' && s[i] <= '9')
		|| (s[i] >= 'A' && s[i] <= 'Z')
		|| (s[i] >= 'a' && s[i] <= 'z'))
		res = 1;
	return (res);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check_char_alpha(str, i - 1) == 0)
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (check_char_alpha(str, i - 1) == 1)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
