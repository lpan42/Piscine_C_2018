/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 01:17:05 by lpan              #+#    #+#             */
/*   Updated: 2018/07/13 11:07:48 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int a;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			a = i;
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (str + a);
				j++;
				i++;
			}
			i = a;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	to_find1[100] = "president";
	char	to_find2[100] = "attck";
	char	to_find3[100] = "Bauer";

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (!(ft_strstr(argv[i], to_find1) == 0))
				write(1, "Alert!!!\n", 8);
			if (!(ft_strstr(argv[i], to_find2) == 0))
				write(1, "Alert!!!\n", 8);
			if (!(ft_strstr(argv[i], to_find3) == 0))
				write(1, "Alert!!!\n", 8);
			i++;
		}
	}
	return (0);
}
