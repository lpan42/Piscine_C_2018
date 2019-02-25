/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 14:10:18 by lpan              #+#    #+#             */
/*   Updated: 2018/07/12 11:05:06 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main()
{
	int i;
	
	i = 0;
	char a[] = "Hello World!";
	char b[50];
	printf("ft_strcpy: %s\n",ft_strcpy(b, a));
	printf("strcpy: %s\n",strcpy(b, a));
	return (0);
}
