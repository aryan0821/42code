/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnair <arnair@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:36:08 by arnair            #+#    #+#             */
/*   Updated: 2022/08/08 16:00:03 by arnair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	char_to_hex(char c)
{
	char res[2];
	char hex[16] = "0123456789abcdef";

	res[0] = hex[c / 16];
	res[1] = hex[c % 16];
	write(1, res, 2);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    char *ptr;
    char **ptr2;
    char str[17];
    int i;

    i = 0;
    ptr = addr;
    ptr2 = &ptr;
	while(*ptr != '\0')
    {
        str[i] = ' ';
        write(1, ptr2, 1);
        write(1, ": ", 2);
        while(i < 16 && *ptr != '\0')
        {   
            char_to_hex(*ptr);
            if(i % 2 == 1)
                write(1, " ", 1);
            if(*ptr > 31)
                str[i] = *ptr;
            else
                str[i] = '.';
            i++;
            ptr++;
        }
        write(1, str, i);
        write(1, "\n", 1);
        i = 0;
    }
    return addr;
}

int main()
{
    char *test = "THIS IS MEMORY TEST -- Abu Dhabi 42 is Awesome, \t\e\a\a\a But I don't like Normanette!!! ";
    ft_print_memory(test, strlen(test));
}
