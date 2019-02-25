/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:27:48 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 16:27:07 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);

	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int main()
{
	printf("%d\n", ft_iterative_power(3, 3));
	return (0);
}

