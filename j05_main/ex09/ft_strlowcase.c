/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:13:03 by lpan              #+#    #+#             */
/*   Updated: 2018/07/11 22:22:21 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strlowcase(char *str)
{
	int i;

	    i = 0;
		    while (str[i])
				    {
						        if ((str[i] >= 'A') && (str[i] <= 'Z'))
									            str[i] = str[i] + 'a' - 'A';
								        i++;
										    }
			    return (str);
}

int main()
{
    char s[] = "IEJERJEMKLEK";
    printf("%s\n", ft_strlowcase(s));
    return 0;
}
