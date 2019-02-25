/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:29:21 by lpan              #+#    #+#             */
/*   Updated: 2018/07/11 22:33:49 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;
	int a;

	i = ft_strlen(dest);
	j = 0;
	a = 0;
	while ((src[j] != '\0') && (a < nb))
	{
		dest[i + a] = src[j];
		j++;
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
