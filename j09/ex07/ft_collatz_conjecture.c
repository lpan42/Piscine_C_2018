/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 23:54:08 by lpan              #+#    #+#             */
/*   Updated: 2018/07/13 02:20:49 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if (base % 2 == 0)
			base = base / 2;
		else if (base % 2 != 0)
			base = base * 3 + 1;
		return (ft_collatz_conjecture(base) + 1);
	}
	return (0);
}
