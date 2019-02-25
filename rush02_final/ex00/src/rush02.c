/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 00:03:13 by cgirard-          #+#    #+#             */
/*   Updated: 2018/07/22 21:56:38 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	first02(int x, int *ptr, char *rush02)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			allocate_char(rush02, ptr, 'A');
		else
			allocate_char(rush02, ptr, 'B');
		i++;
	}
	allocate_char(rush02, ptr, '\n');
}

void	last02(int x, int *ptr, char *rush02)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			allocate_char(rush02, ptr, 'C');
		else
			allocate_char(rush02, ptr, 'B');
		i++;
	}
	allocate_char(rush02, ptr, '\n');
}

void	middle02(int x, int *ptr, char *rush02)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			allocate_char(rush02, ptr, 'B');
		else
			allocate_char(rush02, ptr, ' ');
		i++;
	}
	allocate_char(rush02, ptr, '\n');
}

void	rush02(int x, int y, int *ptr, char *rush02)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0)
				first02(x, ptr, rush02);
			else if (i == y - 1)
				last02(x, ptr, rush02);
			else
				middle02(x, ptr, rush02);
			i++;
		}
	}
}
