/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:26:50 by lpan              #+#    #+#             */
/*   Updated: 2018/07/17 19:59:52 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int numbers;
	int *result;
	int *p;

	numbers = max - min;
	if (min >= max)
		return (0);
	result = (int*)malloc(sizeof(int) * (numbers + 1));
	if (result == 0)
		return (0);
	p = result;
	while (min < max)
	{
		*p = min;
		p++;
		min++;
	}
	return (result);
}

int main()
{
	int		min;
	int		max;
	int		*p;
	int 	i;

	i = 0;
	min = 0;
	max = 1010;

	p = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\t", p[i]);
		i++;
	}
	return (0);
}
