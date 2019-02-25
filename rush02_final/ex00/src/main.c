/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 21:53:51 by lpan              #+#    #+#             */
/*   Updated: 2018/07/22 21:55:30 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	*ft_read_copy2(char *str, char *buf)
{
	int		j;
	int		i;
	char	*temp;

	j = 0;
	while (read(0, buf, 1))
	{
		str[j] = buf[0];
		j++;
		temp = malloc(sizeof(char) * (j + 3));
		if (temp == NULL)
			return (0);
		i = 0;
		while (str[i] != '\0')
		{
			temp[i] = str[i];
			i++;
		}
		temp[j + 1] = '\0';
		free(str);
		str = temp;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_read_copy(char *str)
{
	char	buf[3];

	str = malloc(sizeof(char) * (3));
	if (str == NULL)
		return (0);
	str = ft_read_copy2(str, buf);
	return (str);
}

int		main(void)
{
	char	*str;
	char	*copy;

	str = NULL;
	copy = ft_read_copy(str);
	check_rush(copy);
	free(str);
	return (0);
}
