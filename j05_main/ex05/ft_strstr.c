/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:35:00 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 11:10:02 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
 	int a;

    i = 0;
	if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
		j = 0;
		if (str[i] == to_find[j])
		{
			a = i;
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (str + a);
				j++;
				i++;
			}
			i = a;
		}
		i++;
    }
    return (0);
}

int main()
{
    char str[] = "this is test for testing";
    char substr[] = "testing";
    
    printf("ft_strstr: %s\n", ft_strstr(str, substr));
    printf("strstr: %s\n", strstr(str, substr));
    
    return (0);
}
