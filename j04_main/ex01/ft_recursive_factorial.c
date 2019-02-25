/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:29:48 by lpan              #+#    #+#             */
/*   Updated: 2018/07/09 10:37:39 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (0);
}

int	main()
{
	printf("%d\n", ft_recursive_factorial(11));
	return (0);
}
