/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:50:39 by arnair            #+#    #+#             */
/*   Updated: 2022/08/15 14:37:43 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		while (*argv[counter] != '\0')
		{
			write(1, argv[counter], 1);
			argv[counter]++;
		}
		write(1, "\n", 1);
		counter++;
	}
}
