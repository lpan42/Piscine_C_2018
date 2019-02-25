/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:59:17 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 22:01:03 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    while (*str != '\0')
    {
        if(!(*str >= 'A' && *str <= 'Z'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main()
{
    char s[] = "EIRFK";
    printf("%d\n", ft_str_is_uppercase(s));
    return (0);
}
