/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:19:34 by lpan              #+#    #+#             */
/*   Updated: 2018/07/05 17:43:06 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int	i;
	int	j;

	i = 12;
	j = 3;
	
	printf("i %d, j %d\n", i, j);
	ft_swap(&i, &j);
	printf("i %d, j %d\n", i, j);

	return(0);
}