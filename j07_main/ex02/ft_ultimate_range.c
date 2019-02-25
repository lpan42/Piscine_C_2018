/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:27:04 by lpan              #+#    #+#             */
/*   Updated: 2018/07/17 19:55:26 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(**range) * (max - min));
	if (*range == 0)
		return (0);
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (max - min);
}

int main()
{
	int min;
    int max;
    int *range;

    min = 0;
    max = 1008890;
    printf("%d\n", ft_ultimate_range(&range, min, max));
    return (0);
}
