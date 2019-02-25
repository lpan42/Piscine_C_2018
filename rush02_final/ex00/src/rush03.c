/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 00:03:13 by cgirard-          #+#    #+#             */
/*   Updated: 2018/07/22 21:56:28 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void		firstlast03(int x, int *ptr, char *rush03)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			allocate_char(rush03, ptr, 'A');
		else if (i == x - 1)
			allocate_char(rush03, ptr, 'C');
		else
			allocate_char(rush03, ptr, 'B');
		i++;
	}
	allocate_char(rush03, ptr, '\n');
}

void		middle03(int x, int *ptr, char *rush03)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			allocate_char(rush03, ptr, 'B');
		else
			allocate_char(rush03, ptr, ' ');
		i++;
	}
	allocate_char(rush03, ptr, '\n');
}

void		rush03(int x, int y, int *ptr, char *rush03)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0 || i == y - 1)
				firstlast03(x, ptr, rush03);
			else
				middle03(x, ptr, rush03);
			i++;
		}
	}
}
