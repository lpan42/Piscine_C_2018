/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 12:00:03 by lpan              #+#    #+#             */
/*   Updated: 2018/07/22 21:55:22 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	*ft_create_rush00(int x, int y)
{
	int		i;
	int		*ptr;
	char	*copy00;

	i = 0;
	ptr = &i;
	copy00 = malloc(sizeof(char) * ((y * (x + 1) + 1)));
	if (copy00 == 0)
		return (0);
	rush00(x, y, ptr, copy00);
	copy00[*ptr] = '\0';
	return (copy00);
}

char	*ft_create_rush01(int x, int y)
{
	int		i;
	int		*ptr;
	char	*copy01;

	i = 0;
	ptr = &i;
	copy01 = malloc(sizeof(char) * ((y * (x + 1) + 1)));
	if (copy01 == 0)
		return (0);
	rush01(x, y, ptr, copy01);
	copy01[*ptr] = '\0';
	return (copy01);
}

char	*ft_create_rush02(int x, int y)
{
	int		i;
	int		*ptr;
	char	*copy02;

	i = 0;
	ptr = &i;
	copy02 = malloc(sizeof(char) * ((y * (x + 1) + 1)));
	if (copy02 == 0)
		return (0);
	rush02(x, y, ptr, copy02);
	copy02[*ptr] = '\0';
	return (copy02);
}

char	*ft_create_rush03(int x, int y)
{
	int		i;
	int		*ptr;
	char	*copy03;

	i = 0;
	ptr = &i;
	copy03 = malloc(sizeof(char) * ((y * (x + 1) + 1)));
	if (copy03 == 0)
		return (0);
	rush03(x, y, ptr, copy03);
	copy03[*ptr] = '\0';
	return (copy03);
}

char	*ft_create_rush04(int x, int y)
{
	int		i;
	int		*ptr;
	char	*copy04;

	i = 0;
	ptr = &i;
	copy04 = malloc(sizeof(char) * ((y * (x + 1) + 1)));
	if (copy04 == 0)
		return (0);
	rush04(x, y, ptr, copy04);
	copy04[*ptr] = '\0';
	return (copy04);
}
