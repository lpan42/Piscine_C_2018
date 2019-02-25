/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 22:56:58 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 23:17:26 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_antidote(int i, int j, int k)
{
	int a;
	
	if (i > j)
	{
		a = i;
		i = j;
		j = a;
	}
	if (k > j)
		return (j);
	if (k < i)
		return (i);
	else
		return (k);
}

int main()
{
	int i;
	int j;
	int k;

	i = 6788;
	j = 90675;
	k = 1083;
	printf("%d\n", ft_antidote(i, j, k));
	return (0);
}
