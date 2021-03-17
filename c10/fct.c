/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llyra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:33:18 by llyra             #+#    #+#             */
/*   Updated: 2021/03/15 14:33:56 by llyra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(void)
{
    char a[] = "Hello";
    ft_putstr(a);
}
gcc -Wall -Werror -Wextra -c srcs/ft_putchar.c -o srcs/ft_putchar.o -I includes/