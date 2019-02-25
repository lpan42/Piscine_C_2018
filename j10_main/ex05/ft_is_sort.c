/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:02:14 by lpan              #+#    #+#             */
/*   Updated: 2018/07/21 19:06:13 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int check;

	i = 0;
	check = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		{
			if (check == -1)
				return (0);
			check = 1;
		}
		if (f(tab[i], tab[i + 1]) > 0)
		{
			if (check == 1)
				return (0);
			check = -1;
		}
		i++;
	}
	return (1);
}
