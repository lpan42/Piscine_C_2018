/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 00:01:30 by lpan              #+#    #+#             */
/*   Updated: 2018/07/16 10:47:07 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		match(char *s1, char *s2, int *nb)
{
	if (*s1 != *s2 && *s2 != '*')
		return;
	if (*s1 == *s2 && *s2 == '\0')
	{
		*nb = *nb + 1;
		return ;
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		match(s1, s2 + 1, nb);
	}
	if (*s1 != '\0' && *s2 == '*')
	{
		match(s1, s2 + 1, nb);
		match(s1 + 1, s2, nb);
	}
	if (*s1 == *s2 && *s2 != '\0')
		match(s1 + 1, s2 + 1, nb);
	return;
}
int nmatch(char *s1, char *s2)
{
	int i;
	int *nb;

	i = 0;
	nb = &i;
	match(s1, s2, nb);
	return (i);
}
int		main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 3)
	{
		printf("%d\n", nmatch(argv[1], argv[2]));
	}
	return (0);
}
