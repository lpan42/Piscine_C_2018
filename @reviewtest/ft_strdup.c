/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:51:36 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 16:27:45 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while(src[size])
		size++;
	dest = (char*)malloc(sizeof(char) * (size + 1));
	if (dest == 0)
		return (0);
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *s = "This is the test for testing";

	printf("%s\n", ft_strdup(s));
	return (0);
}
