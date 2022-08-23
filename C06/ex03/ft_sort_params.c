/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:57:50 by arnair            #+#    #+#             */
/*   Updated: 2022/08/15 14:35:08 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	print_args(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		x;
	int		y;
	char	*temp;

	x = 1;
	while (x < argc)
	{
		y = 1;
		while (y < argc - x)
		{
			if (ft_strcmp(argv[y], argv[y + 1]) == 1)
			{
				temp = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = temp;
			}
			y++;
		}
		x++;
	}
	print_args(argc, argv);
}
