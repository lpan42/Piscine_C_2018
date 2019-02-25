/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:49:19 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 21:51:37 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while (*str != '\0')
    {
        if(!(*str >= '0' && *str <= '9'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main()
{
    char s[] = "454   445";
    printf("%d\n", ft_str_is_numeric(s));
    return (0);
}
