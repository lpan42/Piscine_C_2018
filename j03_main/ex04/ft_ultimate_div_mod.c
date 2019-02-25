/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:17:07 by lpan              #+#    #+#             */
/*   Updated: 2018/07/06 09:43:37 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

int		 main()
{
	int	a;

	int	b;

	a = 120;
	b = 6;
	printf("a: %d\t b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d\t b: %d\n", a, b);

	return(0);
}
