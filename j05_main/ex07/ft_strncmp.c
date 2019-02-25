/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:51:22 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 14:36:46 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while ( n > 0)
    {
	   	if (*s1 != *s2)
			return (*s1 - *s2);
		if(*s1 == '\0')
			return (0);
		s1++;
		s2++;
        n--;
    }
	return (0);
}

int main()
{
    char s1[] = "test\200";
    char s2[] = "test\0";
    int i = 6;
    printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, i));
    printf("strncmp : %d\n", strncmp(s1, s2, i));
    return 0;
}
