/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 00:03:13 by cgirard-          #+#    #+#             */
/*   Updated: 2018/07/22 21:56:54 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void		firstlast00(int x, int *ptr, char *rush00)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			allocate_char(rush00, ptr, 'o');
		else if (i == x - 1)
			allocate_char(rush00, ptr, 'o');
		else
			allocate_char(rush00, ptr, '-');
		i++;
	}
	allocate_char(rush00, ptr, '\n');
}

void		line00(int x, int *ptr, char *rush00)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			allocate_char(rush00, ptr, '|');
		else
			allocate_char(rush00, ptr, ' ');
		i++;
	}
	allocate_char(rush00, ptr, '\n');
}

void		rush00(int x, int y, int *ptr, char *rush00)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0 || i == y - 1)
				firstlast00(x, ptr, rush00);
			else
				line00(x, ptr, rush00);
			i++;
		}
	}
}
