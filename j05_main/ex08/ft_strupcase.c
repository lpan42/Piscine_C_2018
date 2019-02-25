/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:41:45 by lpan              #+#    #+#             */
/*   Updated: 2018/07/11 22:11:34 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strupcase(char *str)
{
	int i;

	i = 0;	
	while (str[i] != '\0')
				    {
						        if ((str[i] >= 'a') & str[i] <= 'z'))
									            str[i] = str[i] + 'A' - 'a';
								        i++;
										    }
			    return (str);
}

int main()
{
	char s[] = "fkrlejmknfgkldgmklfgk";
	ft_strupcase(s);
	printf("%s\n", s);
	return 0;
}
