/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 22:19:04 by lpan              #+#    #+#             */
/*   Updated: 2018/07/21 19:00:29 by lpan             ###   ########.fr       */
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

int		ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_any(av, &check));
	return(0);
}
