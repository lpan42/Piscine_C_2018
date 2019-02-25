/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:10:20 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 01:11:14 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int                ft_strlen(char *str)
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

unsigned int    ft_strlcpy(char *dest, char *src, int size)
{
    unsigned int    i;
    unsigned int    j;
    
    i = ft_strlen(dest) + 1;
    j = ft_strlen(src) + 1;
    if ((i + j) < size)
        return (i + j);
    else
        return (size);
}

int    main()
{
	 int i;
    
    i = 11;
    char a[12] = "Hello world!";
    char b[50];
    
    printf("ft_strlcpy: %u\n", ft_strlcpy(b, a, i));
    return 0;
}

