/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:11:49 by lpan              #+#    #+#             */
/*   Updated: 2018/07/13 14:44:13 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_deal_negative(int value)
{
	int i;
	int a;

	a = 0;
	i = 1073741824;
	if (value == -2147483648)
		return (1);
	value = value * -1 + 1;
	while (i > 0)
	{
		if (value >= i)
		{
			value = value - i;
			i = i / 2;
		}
		else
		{
			i = i / 2;
			a++;
		}
	}
	return (a + 1);
}

unsigned int	ft_active_bits(int value)
{
	int i;
	int a;

	i = 1073741824;
	a = 0;
	if (value < 0)
		return (ft_deal_negative(value));
	while (i > 0)
	{
		if (value >= i)
		{
			a++;
			value = value - i;
			i = i / 2;
		}
		else
		{
			i = i / 2;
		}
	}
	return (a);
}
