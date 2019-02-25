/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 23:54:08 by lpan              #+#    #+#             */
/*   Updated: 2018/07/13 00:48:31 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int i;

	i = 0;
	if (base != 1)
	{
		if (base % 2 == 0)
			base = base /2;
		else if (base % 2 != 0)
			base = base * 3 + 1;
		return(ft_collatz_conjecture(base) + 1);
	}
	return (0);
}
int main()
{
	unsigned int nb;
	nb = 127;
	printf("%d\n", ft_collatz_conjecture(nb));
	return (0);
}
