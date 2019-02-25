/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:29:21 by lpan              #+#    #+#             */
/*   Updated: 2018/07/11 22:34:40 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
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

char *ft_strncat(char *dest, char *src, int nb)
{
    int i;
    int j;
    int a;

    i = ft_strlen(dest);
    j = 0;
	a = 0;
    while ((src[j] != '\0') && (a < nb))
    {
        dest[i + a] = src[j];
        j++;
		a++;
    }
	dest[i + a] = '\0';
    return (dest);
}

int main()
{
    int n;
	
    n = 4;
	char s1[] = "toto";
    char s2[] = "flute";
    printf("ft_strncat: %s\n", ft_strncat(s1, s2, n));
    printf("strncat: %s\n", strncat(s1, s2, n));
    return (0);
}
