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
void ft_print_bits(unsigned value)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (value >= i)
		{
			write (1, "1", 1);
			value = value - i;
		}
		else
		{
			write (1, "0", 1);
		}
		i = i / 2;
	}
}

int main()
{
	unsigned char value;

	value = 100;
	ft_print_bits(value);
	return (0);
}
