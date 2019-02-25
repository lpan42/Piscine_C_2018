/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:03:28 by lpan              #+#    #+#             */
/*   Updated: 2018/07/24 16:03:30 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *list;
	t_list *temp;

	list = *begin_list;
	while (list)
	{
		if (cmp(list -> data, data_ref) == 0)
		{
			if (list == *begin_list)
				*begin_list = list -> next;
			else
				prev -> next = list -> next;
			temp = list;
			list = list -> next;
			free (temp);
		}
		else
		{
			prev = list;
			list = list -> next;
		}
	}
}
