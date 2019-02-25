/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 01:54:11 by lpan              #+#    #+#             */
/*   Updated: 2018/07/22 01:59:04 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		list = ft_create_elem(data);
		list -> next = *begin_list;
		*begin_list = list;
	}
}
