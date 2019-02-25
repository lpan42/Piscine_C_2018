/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:45:47 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 01:07:44 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int    ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    
    i = ft_strlen(dest) + 1;
    j = ft_strlen(src) + 1;
	if((i + j) < size)
		return (i + j);
	else
		return (size);
}

int main()
{
    unsigned int n;
    
    n = 19;
    char s1[] = "Hello";
    char s2[] = "World";
    printf("%u\n", ft_strlcat(s1, s2, n));
    return (0);
}
