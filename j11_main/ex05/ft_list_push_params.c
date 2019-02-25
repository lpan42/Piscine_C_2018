/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 20:44:12 by lpan              #+#    #+#             */
/*   Updated: 2018/07/23 20:44:14 by lpan             ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	int i;
	t_list	*current;

	i = 0;
	current = 0;
	while  (i < ac)
	{
		ft_list_push_front(&current, av[i]);
		i++;
	}
	return (current);
}
