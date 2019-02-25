/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 18:42:15 by lpan              #+#    #+#             */
/*   Updated: 2018/07/23 18:42:17 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int i;
	t_list	*current;

	i = 0;
	current = begin_list;
	while (current)
	{
		current = current -> next;
		i++;
	}
	return (i);
}
