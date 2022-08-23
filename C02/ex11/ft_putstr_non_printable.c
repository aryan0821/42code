/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:12:36 by arnair            #+#    #+#             */
/*   Updated: 2022/08/11 09:32:22 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	char_to_hex(char c)
{
	char	res[2];

	if (c < 0)
		c += 256;
	res[0] = "0123456789abcdef"[c / 16];
	res[1] = "0123456789abcdef"[c % 16];
	write(1, res, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			char_to_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
