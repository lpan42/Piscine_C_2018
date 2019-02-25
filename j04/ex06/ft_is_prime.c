/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 20:47:03 by lpan              #+#    #+#             */
/*   Updated: 2018/07/08 17:39:08 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb > 1)
	{
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}