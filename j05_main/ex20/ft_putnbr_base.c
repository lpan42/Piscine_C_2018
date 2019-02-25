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

void ft_putnbr_base(int nb, int base, char *str)
{
   if (nb == -2147483648)
   {
       ft_putchar('-');
       ft_putchar(str[2 % base]);
       ft_putnbr_base(147483648, base, str);
   }
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr_base((nb * -1), base, str);
    }
    else if (nb >= 0 && nb < base)
            ft_putchar(str[nb % base]);
    else
    {
        ft_putnbr_base((nb/base), base, str);
        ft_putchar(str[nb % base]);
    }
}
    
int main()
{
	char base[] = "0123456789abcdef”;
    int nb = 1;
    int i = ft_check_lenth(base);
	ft_putnbr_base(nb, i, base);
    return 0;
}
