/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 01:20:56 by lpan              #+#    #+#             */
/*   Updated: 2018/07/22 01:23:10 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if (list == NULL)
		return (0);
	list->data = data;
	list->next = NULL;
	return (list);
}

int		main()
{
	int a = 54;
	int *ptr = &a;
	int data = 43;
	ft_create_elem(&data);
	while(*ptr)
	{
		printf("%d\n", *ptr);
		ptr++;
	}
	return (0);
}
