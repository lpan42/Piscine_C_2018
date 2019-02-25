/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:49:09 by lpan              #+#    #+#             */
/*   Updated: 2018/07/07 17:56:29 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_sort_integer_table(int *tab, int size)
{
	int temp;
	int a;
	int i;	
	
	i = 0;
	while (i < size - 1)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a+1])
			{
				temp = tab[a];
				tab[a] = tab[a+1];
				tab[a+1] = temp;
			}
			a++;
		}
		i++;
	}
}

int main()
{
	int i;
	int array[7] = {24,74,95,3,22,55, 1};
	int *ptr;

	i = 0;
	ptr = array;
	while(i < 6)
	{
		printf("%d,", array[i]);
		i++;
	}
	printf("\n");
	ft_sort_integer_table(ptr, 7);
	i = 0;
	while(i < 6)
	{
		printf("%d,", array[i]);
		i++;
	}
	return (0);
}
