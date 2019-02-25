/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:12:25 by lpan              #+#    #+#             */
/*   Updated: 2018/07/10 20:42:40 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str)
{
	int			sign;
	int			result;
	int			i;

	sign = 1;
	i = 0;
	result = 0;
	if ((str[i] == '-') || (str[i] == '+'))
	{
        if (str[i] == '-')
            sign = -1;
		i++;
	}
    while (*str == ' ' || *str == '\t' || *str == '\n' ||
           *str == '\r' || *str == '\v' || *str == '\f')
        str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}

int		main()
{
//	if (argc != 2)
//		return (0);
//	else
//	{
		printf("\n atoi: %d\n", atoi("-46\b9 \n5d6"));
		printf("ft_atoi: %d\n", ft_atoi("-46\b9 \n5d6"));
//	}
	return (0);
}
