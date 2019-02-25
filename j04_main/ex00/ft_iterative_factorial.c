/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 11:19:33 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 16:25:15 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
 int ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while ( nb > 0 && nb <= 12)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int main()
{
	printf("%d", ft_iterative_factorial(11));
	return (0);
}
