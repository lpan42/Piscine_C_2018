/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 22:01:34 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 22:06:29 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    while (*str != '\0')
    {
        if(!(*str > 32 && *str <= 126))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main()
{
    char s[] = "EIR\nFK";
    printf("%d\n", ft_str_is_printable(s));
    return (0);
}

