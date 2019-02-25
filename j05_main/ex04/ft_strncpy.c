/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 14:30:56 by lpan              #+#    #+#             */
/*   Updated: 2018/07/13 11:52:15 by lpan             ###   ########.fr       */
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

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = ft_strlen(src);

	while ( src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	if (len > n)
		return (dest);
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
    int i;
    
    i = 13;
    char src[30] = "hello";
	char dest[50] = "helloooooooooooooooooo";
//	printf("ft_strcpy: %s\n", ft_strncpy(dest, src, i));
 	printf("strncpy: %s\n", strncpy(dest, src, i));
	return (0);
}

