/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:11:49 by lpan              #+#    #+#             */
/*   Updated: 2018/07/20 11:27:14 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_deal_negative(value)
{
    int i;

	i = 1073741824;
    
    value = value * -1 + 1;
	while (i > 0)
    {
        if (value >= i)
        {
            write (1, "0", 1);
            value = value - i;
            i  = i / 2;
        }
        else
        {
            write (1, "1", 1);
            i = i / 2;
        }
    }
}

void ft_active_bits(int value)
{
	int i;
	int b;

	i = 1073741824;
	b = value;
	while (i > 0)
	{
		if (value >= i)
		{
			write (1, "1", 1);
			value = value - i;
			i  = i / 2;
		}
		else
		{
			write (1, "0", 1);
			i = i / 2;
		}
	}
}

int main()
{
	int value;
	
	value = 356;
	ft_active_bits(value);
	return (0);
}

