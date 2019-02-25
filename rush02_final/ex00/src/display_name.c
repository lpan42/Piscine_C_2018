/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_name.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 21:55:08 by lpan              #+#    #+#             */
/*   Updated: 2018/07/22 21:55:12 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	display_name(char name, int column, int line, int result)
{
	if (result > 0)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	write(1, &name, 1);
	ft_putstr("] [");
	ft_putnbr(column);
	ft_putstr("] [");
	ft_putnbr(line);
	ft_putchar(']');
}
