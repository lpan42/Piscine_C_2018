/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:50:22 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 19:38:33 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_ampm(int hour)
{
	char *apm;
	if ((hour >= 12) && (hour <= 23))
		apm = "P. M.";
	else
		apm = "A. M.";
	return (apm);
}

int ft_deal12(int nb)
{
	int hour;
	if (nb == 12)
		hour = 12;
	else 
		hour = nb % 12;
	return (hour);
}

void ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", ft_deal12(hour));
	printf(".00 %s", ft_ampm(hour));
	printf(" AND %d", ft_deal12(hour + 1));
	printf(".00 %s\n",ft_ampm(hour));
}

int main()
{
	int i;
	i = 13;
	ft_takes_place(i);
	return (0);
}
