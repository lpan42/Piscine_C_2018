/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 20:53:29 by exam              #+#    #+#             */
/*   Updated: 2018/07/20 21:07:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int n;
	int temp;

	i = 0;
	n = 0;

	while (n < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if(tab[i] > tab[i+ 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		n++;
	}
}
