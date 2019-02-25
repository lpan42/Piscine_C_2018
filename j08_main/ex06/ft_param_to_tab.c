/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:43:33 by lpan              #+#    #+#             */
/*   Updated: 2018/07/18 11:10:13 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char			*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	dest = (char*)malloc(sizeof(char) * (size + 1));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (dest == 0)
		return (0);
	return (dest);
}

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*array;
	int				i;

	i = 0;
	array = malloc(sizeof(t_stock_par) * (ac + 1));
	if (array == 0)
		return (0);
	while (i < ac)
	{
		array[i].size_param = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		array[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].size_param = 0;
	array[i].copy = 0;
	array[i].tab = 0;
	return (array);
}
