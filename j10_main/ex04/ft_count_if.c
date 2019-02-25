/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 22:51:24 by lpan              #+#    #+#             */
/*   Updated: 2018/07/21 19:03:11 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check(char *str)
{
	while(*str != '\0')
	{
		if (*str == 'z')
			return(1);
		str++;
	}
	return (0);
}

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count;

	count = 0;
	while (*tab)
	{
		if (f(*tab))
			count++;
		tab++;
	}
	return (count);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_count_if(av, &check));
	return(0);
}
