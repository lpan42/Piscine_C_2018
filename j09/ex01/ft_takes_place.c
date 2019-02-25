/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 19:06:49 by lpan              #+#    #+#             */
/*   Updated: 2018/07/13 15:17:29 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_printfpm(int nb)
{
	if (nb == 12)
		ft_putstr("12.00 P.M. AND 1.00 P.M.");
	if (nb == 13)
		ft_putstr("1.00 P.M. AND 2.00 P.M.");
	if (nb == 14)
		ft_putstr("2.00 P.M. AND 3.00 P.M.");
	if (nb == 15)
		ft_putstr("3.00 P.M. AND 4.00 P.M.");
	if (nb == 16)
		ft_putstr("4.00 P.M. AND 5.00 P.M.");
	if (nb == 17)
		ft_putstr("5.00 P.M. AND 6.00 P.M.");
	if (nb == 18)
		ft_putstr("6.00 P.M. AND 7.00 P.M.");
	if (nb == 19)
		ft_putstr("7.00 P.M. AND 8.00 P.M.");
	if (nb == 20)
		ft_putstr("8.00 P.M. AND 9.00 A.M.");
	if (nb == 21)
		ft_putstr("9.00 P.M. AND 10.00 P.M.");
	if (nb == 22)
		ft_putstr("10.00 P.M. AND 11.00 P.M.");
	if (nb == 23)
		ft_putstr("11.00 P.M. AND 12.00 A.M.");
}

void	ft_printfam(int nb)
{
	if (nb == 24 || nb == 0)
		ft_putstr("12.00 A.M. AND 1.00 A.M.");
	if (nb == 1)
		ft_putstr("1.00 A.M. AND 2.00 A.M.");
	if (nb == 2)
		ft_putstr("2.00 A.M. AND 3.00 A.M.");
	if (nb == 3)
		ft_putstr("3.00 A.M. AND 4.00 A.M.");
	if (nb == 4)
		ft_putstr("4.00 A.M. AND 5.00 A.M.");
	if (nb == 5)
		ft_putstr("5.00 A.M. AND 6.00 A.M.");
	if (nb == 6)
		ft_putstr("6.00 A.M. AND 7.00 A.M.");
	if (nb == 7)
		ft_putstr("7.00 A.M. AND 8.00 A.M.");
	if (nb == 8)
		ft_putstr("8.00 A.M. AND 9.00 A.M.");
	if (nb == 9)
		ft_putstr("9.00 A.M. AND 10.00 A.M.");
	if (nb == 10)
		ft_putstr("10.00 A.M. AND 11.00 A.M.");
	if (nb == 11)
		ft_putstr("11.00 A.M. AND 12.00 P.M.");
}

void	ft_takes_place(int hour)
{
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 0 || hour <= 11 || hour == 24)
	{
		ft_printfam(hour);
		ft_putchar("\n");
	}
	if (hour >= 12 || hour <= 23)
	{
		ft_printfpm(hour);
		ft_putchar("\n");
	}
	else
		return ;
}
