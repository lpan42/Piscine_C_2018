/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 22:18:10 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 22:39:46 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_rot42(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'q';
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'Q';
		i++;
	}
	return (str);
}

int main()
{
	char s[] = "AaBbCcDdEe";
	ft_rot42(s);
	printf("%s\n", s);
	return (0);
}	
