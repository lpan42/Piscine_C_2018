/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 21:47:24 by lpan              #+#    #+#             */
/*   Updated: 2018/07/21 18:59:06 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int sum(int a)
{
	return (5 + a);
}

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *p;
	int i;

	i = 0;
	p = (int*)malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		p[i] = f(tab[i]);
		i++;
	}
	return (p);
}

int main()
{
	int i[] = {2,6,4,2,4};
	printf("%d", *ft_map(i, 5, sum));
	return (0);
}
