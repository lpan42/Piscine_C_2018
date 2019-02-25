/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 22:09:18 by lpan              #+#    #+#             */
/*   Updated: 2018/07/11 22:51:18 by lpan             ###   ########.fr       */
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

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main()
{
	char s1[] = "hi";
	char s2[] = "Hello";
	printf("ft_strcat : %s\n", ft_strcat(s1, s2));
	return (0);
}

	
