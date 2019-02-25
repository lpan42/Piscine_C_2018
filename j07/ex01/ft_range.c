/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:26:50 by lpan              #+#    #+#             */
/*   Updated: 2018/07/17 19:58:28 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int numbers;
	int *result;
	int *p;

	numbers = max - min;
	if (min >= max)
		return (0);
	result = (int*)malloc(sizeof(int) * (numbers));
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
