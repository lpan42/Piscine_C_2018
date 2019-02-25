/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 22:00:16 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 10:48:10 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

int	main()
{
	printf("%d\n", ft_find_next_prime(8));
	return 0;
}

