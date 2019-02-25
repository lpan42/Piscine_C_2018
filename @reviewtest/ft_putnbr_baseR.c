/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:53:16 by lpan              #+#    #+#             */
/*   Updated: 2018/07/11 17:14:39 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_check_lenth(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (base[i] != '\0')
	{
		j = i + 1;
		while(base [j] != '\0')
		{
			if (base[j] == '+' || base[j] == '-' || base[j] <= 32)
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void ft_putnbr_base(int nb, char *base)
{
    int i;

    i = ft_check_lenth(base);
    if (nb == -2147483648)
    {
       ft_putchar('-');
       ft_putchar(base[2 % i]);
       ft_putnbr_base(147483648, base);
       return ;
   }
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr_base((nb * -1), base);
    }
    else if (nb >= 0 && nb < i)
            ft_putchar(base[nb % i]);
    else
    {
        ft_putnbr_base((nb/i), base);
        ft_putchar(base[nb % i]);
    }
}

int main()
{
	char base[] = "0123456789abc";
    int nb = 145;

	ft_putnbr_base(nb, base);
    return 0;
}
