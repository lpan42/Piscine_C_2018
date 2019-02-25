/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:16:05 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 14:18:24 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_if_is_numberalpha(char *str)
{
    if(*str >= '0' && *str <= '9')
        return (1);
    if(*str >= 'a' && *str <= 'z')
        return (2);
    if(*str >= 'A' && *str <= 'Z')
        return (3);
    return (0);
}

char *ft_strcapitalize(char *str)
{
    int i;
    
    if((ft_if_is_numberalpha(&str[0])) == 2)
		str[i] = str[i] - 32;
	i = 1;
    while (str[i] != '\0')
    {
		if( (ft_if_is_numberalpha(&str[i]) == 2) && 
			(ft_if_is_numberalpha(&str[i - 1]) == 0))
			str[i] = str[i] - 32;
		if ((ft_if_is_numberalpha(&str[i]) == 3) &&
			(!(ft_if_is_numberalpha(&str[i - 1]) == 0)))
			str[i] = str[i] + 32;
		i++;
    }
    return (str);
}

int main()
{
    char s[] = "OQCDnql sph sz 54ker 34Mdkfo";
    printf("%s\n", ft_strcapitalize(s));
    return 0;
}
