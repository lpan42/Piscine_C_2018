/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:52:32 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 21:58:16 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    while (*str != '\0')
    {
        if(!(*str >= 'a' && *str <= 'z'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main()
{
    char s[] = "rtetre";
    printf("%d\n", ft_str_is_lowercase(s));
    return (0);
}
