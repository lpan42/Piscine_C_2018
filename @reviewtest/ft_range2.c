/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 19:43:47 by exam              #+#    #+#             */
/*   Updated: 2018/07/20 20:18:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int size;
	int *ptr;
	int *range;
	int i;

	i = 0;
	if(start <= end)
		size = end - start + 1;
	if(start > end)
		size = start - end + 1;
	range = (int*)malloc(sizeof(int) * (size + 1));
	if(range == 0)
		return (0);
	ptr = range;
	while (i < size)
	{
		 if(start <= end)
			*ptr = start + i;
		 if(start > end)
			*ptr = start - i;
		 ptr++;
		 i++;
	}
	return(range);
}
