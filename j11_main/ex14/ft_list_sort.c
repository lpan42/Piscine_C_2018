/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 21:00:25 by lpan              #+#    #+#             */
/*   Updated: 2018/07/24 21:00:29 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *i;
	t_list *j;
	void *temp;

	i = *begin_list;
	j = i -> next;
	temp = 0;
	while (i)
	{
		j = i -> next;
		while (j)
		{
			if (cmp(i -> data, j -> data) > 0)
			{
				temp = i -> data;
				i -> data = j -> data;
				j -> data = temp;
			}
			j = j -> next;
		}
		i = i -> next;
	}
}
