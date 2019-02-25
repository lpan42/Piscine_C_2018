/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_check_cmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:22:28 by lpan              #+#    #+#             */
/*   Updated: 2018/07/22 21:57:30 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		check_lines(char *str)
{
	int line;

	line = 0;
	while (*str)
	{
		if (*str == '\n')
			line++;
		str++;
	}
	return (line);
}

int		check_col(char *str)
{
	int column;

	column = 0;
	while (*str != '\n')
	{
		str++;
		column++;
	}
	return (column);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	check_rush(char *str)
{
	int column;
	int line;
	int result;

	result = 0;
	column = check_col(str);
	line = check_lines(str);
	if ((ft_strcmp(str, ft_create_rush00(column, line)) == 0))
		display_name('0', column, line, result++);
	if ((ft_strcmp(str, ft_create_rush01(column, line)) == 0))
		display_name('1', column, line, result++);
	if ((ft_strcmp(str, ft_create_rush02(column, line)) == 0))
		display_name('2', column, line, result++);
	if ((ft_strcmp(str, ft_create_rush03(column, line)) == 0))
		display_name('3', column, line, result++);
	if ((ft_strcmp(str, ft_create_rush04(column, line)) == 0))
		display_name('4', column, line, result++);
	if (result == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

void	allocate_char(char *rush, int *i, char c)
{
	rush[*i] = c;
	(*i)++;
}
