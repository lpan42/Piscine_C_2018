/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:29:14 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 16:28:17 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return (1);
	if (power == 1 )
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
	printf("%d\n", ft_recursive_power(3, 3));
	return (0);
}

