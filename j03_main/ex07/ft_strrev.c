/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 15:16:06 by lpan              #+#    #+#             */
/*   Updated: 2018/07/07 15:16:11 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		begin;
	int		end;
	char	temp;

	begin = 0;
	end = 0;
	while (str[end] != '\0')
	{
		end++;
	}
	end = end - 1;
	while (begin < end)
	{
		temp = str[begin];
		str[begin] = str[end];
		str[end] = temp;
		begin++;
		end--;
	}
	return (str);
}

int		main()
{
	char s[13] = "Hello World!";
	printf("%s\n", s);
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}
