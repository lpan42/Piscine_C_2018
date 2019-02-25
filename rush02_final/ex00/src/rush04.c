/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 00:03:13 by cgirard-          #+#    #+#             */
/*   Updated: 2018/07/22 21:57:05 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	first04(int x, int *ptr, char *rush04)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			allocate_char(rush04, ptr, 'A');
		else if (i == x - 1)
			allocate_char(rush04, ptr, 'C');
		else
			allocate_char(rush04, ptr, 'B');
		i++;
	}
	allocate_char(rush04, ptr, '\n');
}

void	last04(int x, int *ptr, char *rush04)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			allocate_char(rush04, ptr, 'C');
		else if (i == x - 1)
			allocate_char(rush04, ptr, 'A');
		else
			allocate_char(rush04, ptr, 'B');
		i++;
	}
	allocate_char(rush04, ptr, '\n');
}

void	middle04(int x, int *ptr, char *rush04)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			allocate_char(rush04, ptr, 'B');
		else
			allocate_char(rush04, ptr, ' ');
		i++;
	}
	allocate_char(rush04, ptr, '\n');
}

void	rush04(int x, int y, int *ptr, char *rush04)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0)
				first04(x, ptr, rush04);
			else if (i == y - 1)
				last04(x, ptr, rush04);
			else
				middle04(x, ptr, rush04);
			i++;
		}
	}
}
