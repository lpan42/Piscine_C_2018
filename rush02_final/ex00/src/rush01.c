/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 00:03:13 by cgirard-          #+#    #+#             */
/*   Updated: 2018/07/22 21:56:48 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	first01(int x, int *ptr, char *rush01)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			allocate_char(rush01, ptr, '/');
		else if (i == x - 1)
			allocate_char(rush01, ptr, '\\');
		else
			allocate_char(rush01, ptr, '*');
		i++;
	}
	allocate_char(rush01, ptr, '\n');
}

void	last01(int x, int *ptr, char *rush01)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			allocate_char(rush01, ptr, '\\');
		else if (i == x - 1)
			allocate_char(rush01, ptr, '/');
		else
			allocate_char(rush01, ptr, '*');
		i++;
	}
	allocate_char(rush01, ptr, '\n');
}

void	middle01(int x, int *ptr, char *rush01)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			allocate_char(rush01, ptr, '*');
		else
			allocate_char(rush01, ptr, ' ');
		i++;
	}
	allocate_char(rush01, ptr, '\n');
}

void	rush01(int x, int y, int *ptr, char *rush01)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
		while (i < y)
		{
			if (i == 0)
				first01(x, ptr, rush01);
			else if (i == y - 1)
				last01(x, ptr, rush01);
			else
				middle01(x, ptr, rush01);
			i++;
		}
}
